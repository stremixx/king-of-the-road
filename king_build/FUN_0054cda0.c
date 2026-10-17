
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0054cda0(int param_1)

{
  uint uVar1;
  float fVar2;
  
  *(undefined4 *)(param_1 + 0xdf4) = 2;
  FUN_00541200();
  (**(code **)(*(int *)(param_1 + 0x10) + 0x9c))(*(uint *)(param_1 + 0x27b4) & 1);
  fVar2 = (float)(int)*(char *)(param_1 + 0x27c4) / _DAT_00673380;
  *(undefined4 *)(param_1 + 0x51f8) = *(undefined4 *)(param_1 + 0x281c);
  *(undefined4 *)(param_1 + 0x5210) = *(undefined4 *)(param_1 + 0x2894);
  *(undefined4 *)(param_1 + 0x5220) = *(undefined4 *)(param_1 + 0x289c);
  *(undefined4 *)(param_1 + 0x521c) = *(undefined4 *)(param_1 + 0x28a4);
  *(float *)(param_1 + 0x51e0) = fVar2 * (float)_DAT_0064e4b8;
  *(undefined4 *)(param_1 + 0x51e4) = *(undefined4 *)(param_1 + 0x2814);
  *(undefined4 *)(param_1 + 0x51fc) = *(undefined4 *)(param_1 + 0x288c);
  *(undefined4 *)(param_1 + 0x51e8) = *(undefined4 *)(param_1 + 0x2818);
  *(undefined4 *)(param_1 + 0x51ec) = *(undefined4 *)(param_1 + 0x2818);
  *(undefined4 *)(param_1 + 0x520c) = *(undefined4 *)(param_1 + 0x2890);
  *(undefined4 *)(param_1 + 0x51f4) = *(undefined4 *)(param_1 + 0x2810);
  *(undefined4 *)(param_1 + 0x5200) = *(undefined4 *)(param_1 + 0x28b0);
  *(undefined4 *)(param_1 + 0x5214) = *(undefined4 *)(param_1 + 0x2898);
  *(uint *)(param_1 + 0x5204) = (uint)*(byte *)(param_1 + 0x2820);
  *(undefined4 *)(param_1 + 0x5218) = *(undefined4 *)(param_1 + 0x28a0);
  *(undefined4 *)(param_1 + 0x522c) = *(undefined4 *)(param_1 + 0x28ac);
  uVar1 = *(uint *)(param_1 + 0x27b4);
  *(undefined4 *)(param_1 + 0x5228) = *(undefined4 *)(param_1 + 0x28a8);
  *(uint *)(param_1 + 21000) = uVar1 & 2;
  *(uint *)(param_1 + 0x51b4) = uVar1 >> 3 & 1;
  *(uint *)(param_1 + 0x51b8) = (uVar1 >> 2 & 1) + (uVar1 >> 3 & 2);
  *(uint *)(param_1 + 0x5178) = uVar1 >> 5 & 1;
  *(uint *)(param_1 + 0x517c) = uVar1 >> 6 & 1;
  *(uint *)(param_1 + 0x5224) = uVar1 >> 0x11 & 1;
  *(uint *)(param_1 + 0x51c0) = uVar1 >> 0x12 & 1;
  FUN_00551080();
  FUN_005864e0();
  *(undefined4 *)(param_1 + 0xdf4) = 0;
  return;
}

