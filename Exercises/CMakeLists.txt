cmake_minimum_required(VERSION 3.23)
project(Exercises C)

set(CMAKE_C_STANDARD 17)

set(CHAP1_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Chapter 1)
set(CHAP2_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Chapter 2)
set(CHAP3_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Chapter 3)
set(CHAP4_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Chapter 4)
set(CHAP5_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Chapter 5)
set(CHAP6_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Chapter 6)
set(CHAP7_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Chapter 7)
set(CHAP8_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Chapter 8)

# Create the target
set(target c1_1)
add_executable(${target} ${CHAP1_DIR}/1-1.c)
set(target c1_2)
add_executable(${target} ${CHAP1_DIR}/1-2.c)
set(target c1_3)
add_executable(${target} ${CHAP1_DIR}/1-3.c)
set(target c1_4)
add_executable(${target} ${CHAP1_DIR}/1-4.c)
set(target c1_5)
add_executable(${target} ${CHAP1_DIR}/1-5.c)
set(target c1_6)
add_executable(${target} ${CHAP1_DIR}/1-6.c)
set(target c1_7)
add_executable(${target} ${CHAP1_DIR}/1-7.c)
set(target c1_8)
add_executable(${target} ${CHAP1_DIR}/1-8.c)
set(target c1_9)
add_executable(${target} ${CHAP1_DIR}/1-9.c)

set(target c1_10)
add_executable(${target} ${CHAP1_DIR}/1-10.c)
set(target c1_11)
add_executable(${target} ${CHAP1_DIR}/1-11.c)
set(target c1_12)
add_executable(${target} ${CHAP1_DIR}/1-12.c)
set(target c1_13)
add_executable(${target} ${CHAP1_DIR}/1-13.c)
set(target c1_14)
add_executable(${target} ${CHAP1_DIR}/1-14.c)
set(target c1_15)
add_executable(${target} ${CHAP1_DIR}/1-15.c)
set(target c1_16)
add_executable(${target} ${CHAP1_DIR}/1-16.c)
set(target c1_17)
add_executable(${target} ${CHAP1_DIR}/1-17.c)
set(target c1_18)
add_executable(${target} ${CHAP1_DIR}/1-18.c)
set(target c1_19)
add_executable(${target} ${CHAP1_DIR}/1-19.c)


set(target c1_20)
add_executable(${target} ${CHAP1_DIR}/1-20.c)
set(target c1_21)
add_executable(${target} ${CHAP1_DIR}/1-21.c)
set(target c1_22)
add_executable(${target} ${CHAP1_DIR}/1-22.c)
set(target c1_23)
add_executable(${target} ${CHAP1_DIR}/1-23.c)
set(target c1_24)
add_executable(${target} ${CHAP1_DIR}/1-24.c)


set(target c2_1)
add_executable(${target} ${CHAP2_DIR}/2-1.c)
set(target c2_2)
add_executable(${target} ${CHAP2_DIR}/2-2.c)
set(target c2_3)
add_executable(${target} ${CHAP2_DIR}/2-3.c)
set(target c2_4)
add_executable(${target} ${CHAP2_DIR}/2-4.c)
set(target c2_5)
add_executable(${target} ${CHAP2_DIR}/2-5.c)
set(target c2_6)
add_executable(${target} ${CHAP2_DIR}/2-6.c)
set(target c2_7)
add_executable(${target} ${CHAP2_DIR}/2-7.c)
set(target c2_8)
add_executable(${target} ${CHAP2_DIR}/2-8.c)
set(target c2_9)
add_executable(${target} ${CHAP2_DIR}/2-9.c)

set(target c2_10)
add_executable(${target} ${CHAP2_DIR}/2-10.c)


set(target c3_1)
add_executable(${target} ${CHAP3_DIR}/3-1.c)
set(target c3_2)
add_executable(${target} ${CHAP3_DIR}/3-2.c)
set(target c3_3)
add_executable(${target} ${CHAP3_DIR}/3-3.c)
set(target c3_4)
add_executable(${target} ${CHAP3_DIR}/3-4.c)
set(target c3_4a)
add_executable(${target} ${CHAP3_DIR}/3-4a.c)
set(target c3_5)
add_executable(${target} ${CHAP3_DIR}/3-5.c)
set(target c3_6)
add_executable(${target} ${CHAP3_DIR}/3-6.c)


set(target c4_1)
add_executable(${target} ${CHAP4_DIR}/4-1.c)
set(target c4_2)
add_executable(${target} ${CHAP4_DIR}/4-2.c)
set(target c4_3)
add_executable(${target} ${CHAP4_DIR}/4-3.c)
set(target c4_4)
add_executable(${target} ${CHAP4_DIR}/4-4.c)
set(target c4_5)
add_executable(${target} ${CHAP4_DIR}/4-5.c)
target_link_libraries(c4_5 m)

set(target c4_6)
add_executable(${target} ${CHAP4_DIR}/4-6.c)
target_link_libraries(c4_6 m)
set(target c4_7)
add_executable(${target} ${CHAP4_DIR}/4-7.c)
set(target c4_8)
add_executable(${target} ${CHAP4_DIR}/4-8.c)
set(target c4_9)
add_executable(${target} ${CHAP4_DIR}/4-9.c)

set(target c4_10)
add_executable(${target} ${CHAP4_DIR}/4-10.c)
target_link_libraries(c4_10 m)
set(target c4_11)
add_executable(${target} ${CHAP4_DIR}/4-11.c)
target_link_libraries(c4_11 m)
set(target c4_12)
add_executable(${target} ${CHAP4_DIR}/4-12.c)
set(target c4_13)
add_executable(${target} ${CHAP4_DIR}/4-13.c)
set(target c4_14)
add_executable(${target} ${CHAP4_DIR}/4-14.c)


set(target c5_1)
add_executable(${target} ${CHAP5_DIR}/5-1.c)
set(target c5_2)
add_executable(${target} ${CHAP5_DIR}/5-2.c)
set(target c5_3)
add_executable(${target} ${CHAP5_DIR}/5-3.c)
set(target c5_4)
add_executable(${target} ${CHAP5_DIR}/5-4.c)
set(target c5_5)
add_executable(${target} ${CHAP5_DIR}/5-5.c)

set(target c5_6)
add_executable(${target} ${CHAP5_DIR}/5-6/main.c ${CHAP5_DIR}/5-6/functions.c)

set(target c5_7)
add_executable(${target} ${CHAP5_DIR}/5-7.c)
set(target c5_7a)
add_executable(${target} ${CHAP5_DIR}/5-7-alloc.c)

set(target c5_8)
add_executable(${target} ${CHAP5_DIR}/5-8.c)
set(target c5_9)
add_executable(${target} ${CHAP5_DIR}/5-9.c)

set(target c5_10)
add_executable(${target} ${CHAP5_DIR}/5-10.c)

set(target c5_11d)
add_executable(${target} ${CHAP5_DIR}/5-11/detab.c)
set(target c5_11e)
add_executable(${target} ${CHAP5_DIR}/5-11/entab.c)

set(target c5_12d)
add_executable(${target} ${CHAP5_DIR}/5-12/detab.c)
set(target c5_12e)
add_executable(${target} ${CHAP5_DIR}/5-12/entab.c)

set(target c5_13)
add_executable(${target} ${CHAP5_DIR}/5-13.c)
set(target c5_14)
add_executable(${target} ${CHAP5_DIR}/5-14.c)
set(target c5_15)
add_executable(${target} ${CHAP5_DIR}/5-15.c)
set(target c5_16)
add_executable(${target} ${CHAP5_DIR}/5-16.c)
set(target c5_17)
add_executable(${target} ${CHAP5_DIR}/5-17.c)
set(target c5_18)
add_executable(${target} ${CHAP5_DIR}/5-18.c)
set(target c5_19)
add_executable(${target} ${CHAP5_DIR}/5-19.c)


set(target c5_20)
add_executable(${target} ${CHAP5_DIR}/5-20.c)


set(target c6_1)
add_executable(${target} ${CHAP6_DIR}/6-1.c)
set(target c6_2)
add_executable(${target} ${CHAP6_DIR}/6-2.c)
set(target c6_3)
add_executable(${target} ${CHAP6_DIR}/6-3.c)
set(target c6_4)
add_executable(${target} ${CHAP6_DIR}/6-4.c)
set(target c6_5)
add_executable(${target} ${CHAP6_DIR}/6-5.c)
set(target c6_6)
add_executable(${target} ${CHAP6_DIR}/6-6.c)

set(target c7_1)
add_executable(${target} ${CHAP7_DIR}/7-1.c)
set(target c7_2)
add_executable(${target} ${CHAP7_DIR}/7-2.c)
set(target c7_3)
add_executable(${target} ${CHAP7_DIR}/7-3.c)
set(target c7_4)
add_executable(${target} ${CHAP7_DIR}/7-4.c)
set(target c7_5)
add_executable(${target} ${CHAP7_DIR}/7-5.c)
set(target c7_5a)
add_executable(${target} ${CHAP7_DIR}/7-5a.c)
set(target c7_6)
add_executable(${target} ${CHAP7_DIR}/7-6.c)
set(target c7_7)
add_executable(${target} ${CHAP7_DIR}/7-7.c)
set(target c7_8)
add_executable(${target} ${CHAP7_DIR}/7-8.c)
set(target c7_9)
add_executable(${target} ${CHAP7_DIR}/7-9.c)

set(target c8_1)
add_executable(${target} ${CHAP8_DIR}/8-1.c)
set(target c8_2)
add_executable(${target} ${CHAP8_DIR}/8-2.c)
set(target c8_3)
add_executable(${target} ${CHAP8_DIR}/8-3.c)
set(target c8_4)
add_executable(${target} ${CHAP8_DIR}/8-4.c)
set(target c8_4l)
add_executable(${target} ${CHAP8_DIR}/8-4-linebuf.c)

set(target c8_5)
add_executable(${target} ${CHAP8_DIR}/8-5.c)
set(target c8_6)
add_executable(${target} ${CHAP8_DIR}/8-6.c)
set(target c8_7)
add_executable(${target} ${CHAP8_DIR}/8-7.c)
set(target c8_8)
add_executable(${target} ${CHAP8_DIR}/8-8.c)
