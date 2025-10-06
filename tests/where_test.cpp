#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/where.hpp"

TEST_CASE("Find single character in a string") {
    std::string text = "The quick brown fox";

    REQUIRE(Find(text, 'e') == 2);
    REQUIRE(Find(text, 'T') == 0);
    REQUIRE(Find(text, 'z') == -1);
}

TEST_CASE("Find substring in a string") {
    std::string text = "The quick brown fox";

    REQUIRE(Find(text, "he") == 1);
    REQUIRE(Find(text, "quick") == 4);
    REQUIRE(Find(text, "dog") == -1);
    REQUIRE(Find(text, "") == 0);
    REQUIRE(Find("Bema", "Bermet") == -1);
}
