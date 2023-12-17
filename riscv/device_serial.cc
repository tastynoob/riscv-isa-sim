#include "common.h"
#include "devices.h"

bool serial_device_t::load(reg_t addr, size_t len, uint8_t* bytes)
{
  memset(bytes, 0, len);
  return true;
}

bool serial_device_t::store(reg_t addr, size_t len, const uint8_t* bytes)
{
  char c = bytes[0];
  putchar(c);
  return true;
}
