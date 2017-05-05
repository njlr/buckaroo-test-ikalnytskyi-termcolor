#include <gtest/gtest.h>
#include <termcolor/termcolor.hpp>
#include <iostream>
#include <sstream>

TEST(termcolor, basics) {

  using namespace termcolor;

  // test foreground colors
  std::cout << grey    << "grey message"    << reset << std::endl;
  std::cout << red     << "red message"     << reset << std::endl;
  std::cout << green   << "green message"   << reset << std::endl;
  std::cout << yellow  << "yellow message"  << reset << std::endl;
  std::cout << blue    << "blue message"    << reset << std::endl;
  std::cout << magenta << "magenta message" << reset << std::endl;
  std::cout << cyan    << "cyan message"    << reset << std::endl;
  std::cout << white   << "white message"   << reset << std::endl;
  std::cout            << "default message" << std::endl;
  std::cout << std::endl;

  // test background colors
  std::cout << on_grey    << "message on grey"    << reset << std::endl;
  std::cout << on_red     << "message on red"     << reset << std::endl;
  std::cout << on_green   << "message on green"   << reset << std::endl;
  std::cout << on_yellow  << "message on yellow"  << reset << std::endl;
  std::cout << on_blue    << "message on blue"    << reset << std::endl;
  std::cout << on_magenta << "message on magenta" << reset << std::endl;
  std::cout << on_cyan    << "message on cyan"    << reset << std::endl;
  std::cout << on_white   << "message on white"   << reset << std::endl;
  std::cout               << "default message"    << std::endl;
  std::cout << std::endl;

  // test foreground and backgrounds colors
  std::cout << red  << on_white  << "red on white"   << reset << std::endl;
  std::cout << blue << on_yellow << "blue on yellow" << reset << std::endl;
  std::cout << std::endl;

  // test unsual attributes
  std::cout << bold      << red  << "bold red message"  << reset << std::endl;
  std::cout << dark      << blue << "dark blue message" << reset << std::endl;
  std::cout << underline << "underlined message" << reset << std::endl;
  std::cout << blink     << "blinked message"    << reset << std::endl;
  std::cout << reverse   << "reversed message"   << reset << std::endl;
  std::cout << concealed << "concealed message"  << reset << std::endl;
  std::cout              << "default message"    << std::endl;

  // test there's no crash with stringstream
  std::stringstream ss;
  ss << grey << "ok";
}
