//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "generate_sub_ranges.h"
#include <vector>
#include <list>
using namespace std;

static void test_1_2() {
  std::list<int> lst1 = {-5, -2, -3, -1, 2, 4};
  vector<std::list<int>> srs = generate_sub_ranges<std::list>(lst1, {-3, 1});
  for (const auto& sub_range: srs) {
    for (const auto& item: sub_range) std::cout << " " << item;
    std::cout << std::endl;
  }
}

TEST_CASE("Question #1.2") {
    execute_test("test_1_2.in", test_1_2);
}