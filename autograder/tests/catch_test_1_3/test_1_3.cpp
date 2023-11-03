//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "generate_sub_ranges.h"
#include <deque>
using namespace std;

static void test_1_3() {
  std::deque<int> d1 = {10, 20, 30, 40, 50};
  auto srs = generate_sub_ranges<std::deque>(d1, {60, 100});
  for (const auto& sub_range: srs) {
    for (const auto& item: sub_range) std::cout << " " << item;
    std::cout << std::endl;
  }
}

TEST_CASE("Question #1.3") {
    execute_test("test_1_3.in", test_1_3);
}