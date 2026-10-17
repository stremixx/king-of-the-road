
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00555750(int param_1,int param_2)

{
  float fVar1;
  
  if ((DAT_006cd294 <= *(int *)(param_1 + 0x28b4)) && (*(int *)(param_1 + 0x28b4) < DAT_006cd29c)) {
    if (param_2 == 1) {
      if (*(int *)(param_1 + 0x2580) == 0) {
        FUN_00555820();
      }
      fVar1 = *(float *)(param_1 + 0x2564) * _DAT_0064c480;
      *(float *)(param_1 + 0x2570) = fVar1;
      *(float *)(param_1 + 0x2574) = fVar1;
      FUN_005558c0(param_1 + 0x2578,param_1 + 0x256c);
      return;
    }
    if ((param_2 == 0) && (*(int *)(param_1 + 0x2580) != 0)) {
      *(undefined4 *)(param_1 + 0x2570) = 0;
      *(undefined4 *)(param_1 + 0x2574) = 0;
      FUN_005558c0(param_1 + 0x2578,param_1 + 0x256c);
    }
  }
  return;
}

