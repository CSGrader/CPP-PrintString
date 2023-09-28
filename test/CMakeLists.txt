file(GLOB_RECURSE ALL_TESTS CONFIGURE_DEPENDS "*.cpp" )

add_executable(
        unit_tests
        ${ALL_TESTS}
)

target_link_libraries(
        unit_tests
        PRIVATE
        gtest_main
)

include(GoogleTest)
gtest_discover_tests(unit_tests
        #EXTRA_ARGS --gtest_output=xml:${WORKSPACE}/xml/{}.xml \;
        PROPERTIES
        LABELS "unit"
        DISCOVERY_TIMEOUT  # how long to wait (in seconds) before crashing
        60
        XML_OUTPUT_DIR reports

        )