add_test([=[SeriesTest.TestA]=]  [==[/Users/yura_kulakovskyi/Documents/C++/AP/PR5/PR5_2/cmake-build-debug/PR5_2_tests]==] [==[--gtest_filter=SeriesTest.TestA]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[SeriesTest.TestA]=]  PROPERTIES WORKING_DIRECTORY [==[/Users/yura_kulakovskyi/Documents/C++/AP/PR5/PR5_2/cmake-build-debug]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[SeriesTest.TestS]=]  [==[/Users/yura_kulakovskyi/Documents/C++/AP/PR5/PR5_2/cmake-build-debug/PR5_2_tests]==] [==[--gtest_filter=SeriesTest.TestS]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[SeriesTest.TestS]=]  PROPERTIES WORKING_DIRECTORY [==[/Users/yura_kulakovskyi/Documents/C++/AP/PR5/PR5_2/cmake-build-debug]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  PR5_2_tests_TESTS SeriesTest.TestA SeriesTest.TestS)
