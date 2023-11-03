//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_PC2_TEO3_V2023_2_GENERATE_SUB_RANGES_H
#define PROG3_PC2_TEO3_V2023_2_GENERATE_SUB_RANGES_H

#include <vector>
#include <utility> // Para std::pair

template <
    template<class ...> class TargetContainerType = std::vector, // Contenedor de destino (por defecto, vector).
    typename T, // Tipo de los elementos en los contenedores.
    template<class ...> class SourceContainerType // Contenedor de origen.
    >
std::vector<TargetContainerType<T>>
generate_sub_ranges(SourceContainerType<T>& cnt, std::pair<T, T> sub_range) {
  std::vector<TargetContainerType<T>> result; // Vector para almacenar los subrangos encontrados.
  auto first = std::begin(cnt); // Iterador al inicio del contenedor de origen.
  auto last = std::end(cnt); // Iterador al final del contenedor de origen.
  auto curr = first; // Iterador actual para buscar subrangos.
  T total = 0; // Suma de los elementos en el subrango actual.

  // Este bucle se mueve a través de cada elemento en el contenedor de origen.
  while (curr != last) {
    total += *curr; // Suma el elemento actual al total.

    // Si el total está dentro del rango especificado, agrega el subrango al resultado.
    if (total >= sub_range.first && total <= sub_range.second) {
      result.emplace_back(first, std::next(curr)); // std::next(curr) porque curr es un iterador al último elemento incluido.
    }

    // Si el total excede el límite superior del rango,
    // retrocede el 'first' hasta que el total esté de nuevo en el rango.
    while (total > sub_range.second && first != curr) {
      total -= *first;
      ++first;
      // Si después de ajustar el 'first', el total está en el rango, incluye este subrango.
      if (total >= sub_range.first && total <= sub_range.second) {
        result.emplace_back(first, std::next(curr));
      }
    }

    // Mueve el iterador actual hacia adelante.
    ++curr;
  }

  // Incluye el último subrango si el total final está dentro del rango.
  // Esto se hace fuera del bucle ya que el 'curr' alcanzó 'last' y no se incluiría de otra manera.
  if (total >= sub_range.first && total <= sub_range.second) {
    result.emplace_back(first, last);
  }

  return result;
}


#endif //PROG3_PC2_TEO3_V2023_2_GENERATE_SUB_RANGES_H
