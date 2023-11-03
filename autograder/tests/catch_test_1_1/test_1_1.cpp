//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "generate_sub_ranges.h"
#include <vector>
using namespace std;

static void test_1_1() {
  std::vector<int> v1 = {1, 2, 3, 4, 5};
  auto srs = generate_sub_ranges<std::vector>(v1, {3, 7});
  for (const auto& sub_range: srs) {
    for (const auto& item: sub_range) std::cout << " " << item;
    std::cout << std::endl;
  }
}

TEST_CASE("Question #1.1") {
    execute_test("test_1_1.in", test_1_1);
}