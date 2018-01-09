#include <criterion/criterion.h>
#include "../include/infin_add.h"

Test(infin_add, 1_and_1) {
    cr_expect_str_eq(infin_add("1", "1"), "2", "%s");
}

Test(infin_add, 2_and_2) {
    cr_expect_str_eq(infin_add("2", "2"), "4", "%s");
}

Test(infin_add, 3_and_7) {
    cr_expect_str_eq(infin_add("3", "7"), "10", "%s");
}

Test(infin_add, 10_and_1) {
    cr_expect_str_eq(infin_add("10", "1"), "11", "%s");
}

Test(infin_add, 1_and_10) {
    cr_expect_str_eq(infin_add("1", "10"), "11", "%s");
}

Test(infin_add, 12_and_8) {
    cr_expect_str_eq(infin_add("12", "8"), "20", "%s");
}

Test(infin_add, 15_and_15) {
    cr_expect_str_eq(infin_add("15", "15"), "30", "%s");
}

Test(infin_add, 47_and_74) {
    cr_expect_str_eq(infin_add("47", "74"), "121", "%s");
}

Test(infin_add, 100_and_100) {
    cr_expect_str_eq(infin_add("100", "100"), "200", "%s");
}

Test(infin_add, 0_and_0) {
    cr_expect_str_eq(infin_add("0", "0"), "0", "%s");
}

Test(infin_add, 00000000_and_00000) {
    cr_expect_str_eq(infin_add("00000000", "00000"), "0", "%s");
}

Test(infin_add, 12345_and_321) {
    cr_expect_str_eq(infin_add("12345", "321"), "12666", "%s");
}

Test(infin_add, 333_and_333) {
    cr_expect_str_eq(infin_add("333", "333"), "666", "%s");
}

Test(infin_add, 184208408408208_and_839274209742094) {
    cr_expect_str_eq(infin_add("184208408408208", "839274209742094"), "1023482618150302", "%s");
}

Test(infin_add, 0183017401749641674614719017071974614649416470146_and_872729424024802407297286816577153681739402472084) {
    cr_expect_str_eq(infin_add("0183017401749641674614719017071974614649416470146", "872729424024802407297286816577153681739402472084"), "1055746825774444081912005833649128296388818942230", "%s");
}

Test(infin_add, 999_and_999) {
    cr_expect_str_eq(infin_add("999", "999"), "1998", "%s");
}

Test(infin_add, 0000001_and_0000000) {
    cr_expect_str_eq(infin_add("0000001", "0000000"), "1", "%s");
}

Test(infin_add, 0000002_and_000000000004) {
    cr_expect_str_eq(infin_add("0000002", "000000000004"), "6", "%s");
}

Test(infin_add, 9999999999999999999999999999_and_99999999999999999999999999999999) {
    cr_expect_str_eq(infin_add("9999999999999999999999999999", "99999999999999999999999999999999"), "100009999999999999999999999999998", "%s");
}