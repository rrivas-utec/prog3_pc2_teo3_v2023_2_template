//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "count_diphthongs.h"
#include <string>
using namespace std;

static void test_2_3() {
  std::wstring doc1 =
      L"The train arrives at eight and then leaves at nine.";
  std::wstring doc2 =
      L"The creation of this beautiful artwork took years.";
  
  int count_doc1 = count_diphthongs(doc1, L"ai"s);
  int count_doc2 = count_diphthongs(doc2, L"ea"s);

  std::wcout << L"ai: " << count_doc1 << L" times." << std::endl;
  std::wcout << L"ea: " << count_doc2 << L" times." << std::endl;
}

TEST_CASE("Question #2.3") {
    execute_test("test_2_3.in", test_2_3);
}