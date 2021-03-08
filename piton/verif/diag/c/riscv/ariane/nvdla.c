#include <stdint.h>
#include "../piton/verif/diag/c/riscv/ariane/mmio.h"
#include "../piton/verif/diag/c/riscv/ariane/nvdla_glb.h"
#include "../piton/verif/diag/c/riscv/ariane/nvdla_cdp.h"
#include "../piton/verif/diag/c/riscv/ariane/nvdla_cdp_rdma.h"
#define NVDLA_BASE 0xfff0e00000
#define reg_write(addr,val) reg_write32(NVDLA_BASE+addr,val)
#define reg_read(addr) reg_read32(NVDLA_BASE+addr)

int main(void)
{
    //----------## Layer:CDP_0: cross layer dependency, begin----------
    //----------## Layer:CDP_0: cross layer dependency, end----------
    //----------## Layer:CDP_0: set producer pointer, begin----------
    reg_write(CDP_S_POINTER, 0);
    reg_write(CDP_RDMA_S_POINTER, 0);
    //----------## Layer:CDP_0: set producer pointer, end----------
    //----------## Layer:CDP_0: LUT programming, begin----------
    reg_write(CDP_S_LUT_ACCESS_CFG, 0x30000);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x0);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x1);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x2);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x3);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x4);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x5);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x6);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x7);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x8);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x9);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xa);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xb);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xc);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xd);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xe);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xf);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x10);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x11);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x12);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x13);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x14);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x15);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x16);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x17);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x18);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x19);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x1a);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x1b);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x1c);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x1d);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x1e);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x1f);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x20);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x21);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x22);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x23);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x24);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x25);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x26);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x27);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x28);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x29);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x2a);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x2b);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x2c);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x2d);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x2e);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x2f);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x30);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x31);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x32);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x33);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x34);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x35);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x36);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x37);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x38);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x39);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x3a);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x3b);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x3c);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x3d);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x3e);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x3f);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x40);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x41);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x42);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x43);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x44);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x45);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x46);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x47);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x48);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x49);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x4a);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x4b);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x4c);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x4d);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x4e);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x4f);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x50);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x51);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x52);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x53);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x54);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x55);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x56);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x57);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x58);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x59);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x5a);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x5b);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x5c);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x5d);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x5e);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x5f);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x60);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x61);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x62);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x63);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x64);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x65);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x66);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x67);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x68);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x69);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x6a);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x6b);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x6c);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x6d);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x6e);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x6f);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x70);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x71);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x72);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x73);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x74);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x75);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x76);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x77);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x78);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x79);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x7a);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x7b);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x7c);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x7d);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x7e);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x7f);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x80);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x81);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x82);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x83);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x84);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x85);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x86);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x87);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x88);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x89);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x8a);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x8b);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x8c);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x8d);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x8e);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x8f);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x90);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x91);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x92);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x93);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x94);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x95);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x96);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x97);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x98);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x99);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x9a);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x9b);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x9c);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x9d);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x9e);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x9f);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xa0);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xa1);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xa2);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xa3);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xa4);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xa5);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xa6);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xa7);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xa8);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xa9);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xaa);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xab);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xac);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xad);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xae);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xaf);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xb0);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xb1);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xb2);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xb3);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xb4);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xb5);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xb6);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xb7);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xb8);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xb9);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xba);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xbb);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xbc);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xbd);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xbe);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xbf);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xc0);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xc1);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xc2);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xc3);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xc4);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xc5);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xc6);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xc7);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xc8);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xc9);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xca);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xcb);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xcc);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xcd);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xce);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xcf);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xd0);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xd1);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xd2);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xd3);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xd4);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xd5);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xd6);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xd7);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xd8);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xd9);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xda);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xdb);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xdc);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xdd);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xde);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xdf);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xe0);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xe1);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xe2);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xe3);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xe4);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xe5);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xe6);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xe7);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xe8);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xe9);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xea);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xeb);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xec);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xed);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xee);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xef);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xf0);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xf1);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xf2);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xf3);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xf4);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xf5);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xf6);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xf7);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xf8);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xf9);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xfa);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xfb);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xfc);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xfd);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xfe);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xff);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x100);
    reg_write(CDP_S_LUT_ACCESS_CFG, 0x20000);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x0);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x1);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x2);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x3);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x4);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x5);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x6);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x7);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x8);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x9);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xa);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xb);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xc);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xd);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xe);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0xf);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x10);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x11);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x12);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x13);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x14);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x15);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x16);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x17);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x18);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x19);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x1a);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x1b);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x1c);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x1d);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x1e);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x1f);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x20);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x21);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x22);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x23);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x24);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x25);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x26);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x27);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x28);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x29);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x2a);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x2b);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x2c);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x2d);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x2e);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x2f);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x30);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x31);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x32);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x33);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x34);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x35);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x36);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x37);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x38);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x39);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x3a);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x3b);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x3c);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x3d);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x3e);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x3f);
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x40);
    reg_write(CDP_S_LUT_LE_START_LOW, 0x0);
    // CDP_S_LUT_LE_START_LOW_0.LUT_LE_START_LOW:0x0
    reg_write(CDP_S_LUT_LO_END_LOW, 0x100);
    // CDP_S_LUT_LO_END_LOW_0.LUT_LO_END_LOW:0x100
    reg_write(CDP_S_LUT_ACCESS_CFG, 0x0);
    // CDP_S_LUT_ACCESS_CFG_0.LUT_ACCESS_TYPE:READ : 0x0
    // CDP_S_LUT_ACCESS_CFG_0.LUT_TABLE_ID:LE : 0x0
    // CDP_S_LUT_ACCESS_CFG_0.LUT_ADDR:0x0
    reg_write(CDP_S_LUT_ACCESS_DATA, 0x0);
    // CDP_S_LUT_ACCESS_DATA.LUT_DATA:0x0
    reg_write(CDP_S_LUT_LE_START_HIGH, 0x0);
    // CDP_S_LUT_LE_START_HIGH_0.LUT_LE_START_HIGH:0x0
    reg_write(CDP_S_LUT_LO_END_HIGH, 0x0);
    // CDP_S_LUT_LO_END_HIGH_0.LUT_LO_END_HIGH:0x0
    reg_write(CDP_S_LUT_CFG, 0x1);
    // CDP_S_LUT_CFG_0.LUT_UFLOW_PRIORITY:LE : 0x0
    // CDP_S_LUT_CFG_0.LUT_OFLOW_PRIORITY:LE : 0x0
    // CDP_S_LUT_CFG_0.LUT_HYBRID_PRIORITY:LE : 0x0
    // CDP_S_LUT_CFG_0.LUT_LE_FUNCTION:LINEAR : 0x1
    reg_write(CDP_S_LUT_LE_SLOPE_SHIFT, 0x0);
    // CDP_S_LUT_LE_SLOPE_SHIFT_0.LUT_LE_SLOPE_OFLOW_SHIFT:0x0
    // CDP_S_LUT_LE_SLOPE_SHIFT_0.LUT_LE_SLOPE_UFLOW_SHIFT:0x0
    reg_write(CDP_S_LUT_LE_SLOPE_SCALE, 0x0);
    // CDP_S_LUT_LE_SLOPE_SCALE_0.LUT_LE_SLOPE_UFLOW_SCALE:0x0
    // CDP_S_LUT_LE_SLOPE_SCALE_0.LUT_LE_SLOPE_OFLOW_SCALE:0x0
    reg_write(CDP_S_LUT_INFO, 0x0);
    // CDP_S_LUT_INFO_0.LUT_LE_INDEX_SELECT:0x0
    // CDP_S_LUT_INFO_0.LUT_LE_INDEX_OFFSET:0x0
    // CDP_S_LUT_INFO_0.LUT_LO_INDEX_SELECT:0x0
    reg_write(CDP_S_LUT_LE_END_LOW, 0x40);
    // CDP_S_LUT_LE_END_LOW_0.LUT_LE_END_LOW:0x40
    reg_write(CDP_S_LUT_LO_SLOPE_SCALE, 0x0);
    // CDP_S_LUT_LO_SLOPE_SCALE_0.LUT_LO_SLOPE_OFLOW_SCALE:0x0
    // CDP_S_LUT_LO_SLOPE_SCALE_0.LUT_LO_SLOPE_UFLOW_SCALE:0x0
    reg_write(CDP_S_LUT_LE_END_HIGH, 0x0);
    // CDP_S_LUT_LE_END_HIGH_0.LUT_LE_END_HIGH:0x0
    reg_write(CDP_S_LUT_LO_START_HIGH, 0x0);
    // CDP_S_LUT_LO_START_HIGH_0.LUT_LO_START_HIGH:0x0
    reg_write(CDP_S_LUT_LO_START_LOW, 0x0);
    // CDP_S_LUT_LO_START_LOW_0.LUT_LO_START_LOW:0x0
    reg_write(CDP_S_LUT_LO_SLOPE_SHIFT, 0x0);
    // CDP_S_LUT_LO_SLOPE_SHIFT_0.LUT_LO_SLOPE_UFLOW_SHIFT:0x0
    // CDP_S_LUT_LO_SLOPE_SHIFT_0.LUT_LO_SLOPE_OFLOW_SHIFT:0x0
    //----------## Layer:CDP_0: LUT programming, end----------
    //----------## Layer:CDP_0: configuraion, begin----------
    reg_write(CDP_D_DATOUT_OFFSET, 0x80);
    // CDP_D_DATOUT_OFFSET_0.DATOUT_OFFSET:0x80
    reg_write(CDP_D_DST_SURFACE_STRIDE, 0x800);
    // CDP_D_DST_SURFACE_STRIDE_0.DST_SURFACE_STRIDE:0x40
    reg_write(CDP_RDMA_D_SRC_BASE_ADDR_LOW, 0x80000000);
    // CDP_RDMA_D_SRC_BASE_ADDR_LOW_0.SRC_BASE_ADDR_LOW:0x4000000
    reg_write(CDP_D_DST_DMA_CFG, 0x1);
    // CDP_D_DST_DMA_CFG_0.DST_RAM_TYPE:MC : 0x1
    reg_write(CDP_RDMA_D_DATA_CUBE_WIDTH, 0x7);
    // CDP_RDMA_D_DATA_CUBE_WIDTH_0.WIDTH:0x7
    reg_write(CDP_RDMA_D_DATA_FORMAT, 0x0);
    // CDP_RDMA_D_DATA_FORMAT_0.INPUT_DATA:INT8 : 0x0
    reg_write(CDP_D_DATIN_SCALE, 0x1);
    // CDP_D_DATIN_SCALE_0.DATIN_SCALE:0x1
    reg_write(CDP_D_DATOUT_SHIFTER, 0x0);
    // CDP_D_DATOUT_SHIFTER_0.DATOUT_SHIFTER:0x0
    reg_write(CDP_RDMA_D_PERF_ENABLE, 0x0);
    // CDP_RDMA_D_PERF_ENABLE_0.DMA_EN:DISABLE : 0x0
    reg_write(CDP_D_LRN_CFG, 0x0);
    // CDP_D_LRN_CFG_0.NORMALZ_LEN:LEN3 : 0x0
    reg_write(CDP_RDMA_D_DATA_CUBE_CHANNEL, 0x1f);
    // CDP_RDMA_D_DATA_CUBE_CHANNEL_0.CHANNEL:0x1f
    reg_write(CDP_D_DATA_FORMAT, 0x0);
    // CDP_D_DATA_FORMAT_0.INPUT_DATA_TYPE:INT8 : 0x0
    reg_write(CDP_D_DATIN_SHIFTER, 0x0);
    // CDP_D_DATIN_SHIFTER_0.DATIN_SHIFTER:0x0
    reg_write(CDP_D_PERF_ENABLE, 0x0);
    // CDP_D_PERF_ENABLE_0.LUT_EN:DISABLE : 0x0
    // CDP_D_PERF_ENABLE_0.DMA_EN:DISABLE : 0x0
    reg_write(CDP_RDMA_D_SRC_BASE_ADDR_HIGH, 0x0);
    // CDP_RDMA_D_SRC_BASE_ADDR_HIGH_0.SRC_BASE_ADDR_HIGH:0x0
    reg_write(CDP_D_DST_BASE_ADDR_HIGH, 0x0);
    // CDP_D_DST_BASE_ADDR_HIGH_0.DST_BASE_ADDR_HIGH:0x0
    reg_write(CDP_RDMA_D_SRC_DMA_CFG, 0x1);
    // CDP_RDMA_D_SRC_DMA_CFG_0.SRC_RAM_TYPE:MC : 0x1
    reg_write(CDP_D_DATOUT_SCALE, 0x1);
    // CDP_D_DATOUT_SCALE_0.DATOUT_SCALE:0x1
    reg_write(CDP_D_DATIN_OFFSET, 0x80);
    // CDP_D_DATIN_OFFSET_0.DATIN_OFFSET:0x80
    reg_write(CDP_D_NAN_FLUSH_TO_ZERO, 0x0);
    // CDP_D_NAN_FLUSH_TO_ZERO_0.NAN_TO_ZERO:DISABLE : 0x0
    reg_write(CDP_D_FUNC_BYPASS, 0x3);
    // CDP_D_FUNC_BYPASS_0.SQSUM_BYPASS:ENABLE : 0x1
    // CDP_D_FUNC_BYPASS_0.MUL_BYPASS:ENABLE : 0x1
    reg_write(CDP_D_DST_BASE_ADDR_LOW, 0x80080000);
    // CDP_D_DST_BASE_ADDR_LOW_0.DST_BASE_ADDR_LOW:0x4004000
    reg_write(CDP_RDMA_D_SRC_SURFACE_STRIDE, 0x800);
    // CDP_RDMA_D_SRC_SURFACE_STRIDE_0.SRC_SURFACE_STRIDE:0x40
    reg_write(CDP_D_DST_LINE_STRIDE, 0x100);
    // CDP_D_DST_LINE_STRIDE_0.DST_LINE_STRIDE:0x8
    reg_write(CDP_RDMA_D_SRC_LINE_STRIDE, 0x100);
    // CDP_RDMA_D_SRC_LINE_STRIDE_0.SRC_LINE_STRIDE:0x8
    reg_write(CDP_RDMA_D_DATA_CUBE_HEIGHT, 0x7);
    // CDP_RDMA_D_DATA_CUBE_HEIGHT_0.HEIGHT:0x7
    //----------## Layer:CDP_0: configuraion, end----------
    //----------## Layer:CDP_0: operation enable, begin----------
    //----------#### Layer:CDP_0: operation enable, block:NVDLA_CDP_RDMA, begin --

    //----------#### Layer:CDP_0: operation enable, block:NVDLA_CDP_RDMA, end   --
    //----------#### Layer:CDP_0: operation enable, block:NVDLA_CDP, begin --
    reg_write(CDP_D_OP_ENABLE,0x1);
    reg_write(CDP_RDMA_D_OP_ENABLE,0x1);
    //----------#### Layer:CDP_0: operation enable, block:NVDLA_CDP, end   --
    //----------## Layer:CDP_0: operation enable, end----------

    while (reg_read(GLB_INTR_STATUS) == 0);

    printf("TEST PASSED");
    
    return 0;
}
