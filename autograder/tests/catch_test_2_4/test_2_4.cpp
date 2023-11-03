//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "count_diphthongs.h"
using namespace std;

static void test_2_4() {
  std::string doc1 =
      "The train arrives at eight and then leaves at nine.";
  std::string doc2 =
      "The creation of this beautiful artwork took years.";
  
  int count_doc1 = count_diphthongs(doc1, "ai"s);
  int count_doc2 = count_diphthongs(doc2, "ea"s);

  std::cout << "ai: " << count_doc1 << " times." << std::endl;
  std::cout << "ea: " << count_doc2 << " times." << std::endl;
}

TEST_CASE("Question #2.4") {
    execute_test("test_2_4.in", test_2_4);
}