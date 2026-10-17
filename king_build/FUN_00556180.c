
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00556180(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x51b8) != 0) {
    iVar4 = FUN_00556370();
    if (iVar4 == 0) {
      FUN_00556150();
      if (*(int *)(param_1 + 0x5450) != 0) {
        *(undefined4 *)(param_1 + 0x5020) = *(undefined4 *)(*(int *)(param_1 + 0x5450) + 0x270c);
        *(undefined4 *)(param_1 + 0x5024) = *(undefined4 *)(*(int *)(param_1 + 0x5450) + 0x271c);
        *(undefined4 *)(param_1 + 0x5028) = *(undefined4 *)(*(int *)(param_1 + 0x5450) + 10000);
        *(int *)(param_1 + 0x502c) = (int)*(short *)(*(int *)(param_1 + 0x5450) + 0x2714);
        *(int *)(param_1 + 0x5030) = (int)*(short *)(*(int *)(param_1 + 0x5450) + 0x2716);
        *(undefined4 *)(param_1 + 0x5034) = *(undefined4 *)(param_1 + 0x50b4);
        *(undefined4 *)(param_1 + 0x5038) = *(undefined4 *)(param_1 + 0x50b8);
        *(undefined4 *)(param_1 + 0x503c) = *(undefined4 *)(param_1 + 0x50bc);
        *(undefined4 *)(param_1 + 0x5040) = *(undefined4 *)(param_1 + 0x218);
        *(undefined4 *)(param_1 + 0x5044) = *(undefined4 *)(param_1 + 0x21c);
        *(undefined4 *)(param_1 + 0x5048) = *(undefined4 *)(param_1 + 0x220);
        *(undefined4 *)(param_1 + 0x504c) = *(undefined4 *)(param_1 + 0x1a0);
        *(undefined4 *)(param_1 + 0x5050) = *(undefined4 *)(param_1 + 0x1a4);
        *(undefined4 *)(param_1 + 0x5054) = *(undefined4 *)(param_1 + 0x1a8);
        *(undefined4 *)(param_1 + 0x5058) = *(undefined4 *)(param_1 + 0x1ac);
        *(undefined4 *)(param_1 + 0x505c) = *(undefined4 *)(param_1 + 0x1b0);
        *(undefined4 *)(param_1 + 0x5060) = *(undefined4 *)(param_1 + 0x1b4);
      }
    }
    else {
      if (*(int *)(param_1 + 0x5450) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x5450) + 0x2780) = 1;
        (**(code **)**(undefined4 **)(param_1 + 0x5450))();
      }
      if ((*(int *)(param_1 + 0xf88) != 3) && (iVar4 = *(int *)(param_1 + 0xdb4), iVar4 != 0)) {
        fVar1 = *(float *)(iVar4 + 0xd2c) - *(float *)(param_1 + 0x218);
        fVar2 = *(float *)(iVar4 + 0xd30) - *(float *)(param_1 + 0x21c);
        fVar3 = *(float *)(iVar4 + 0xd34) - *(float *)(param_1 + 0x220);
        if (fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1 < _DAT_0064ca64) {
          iVar4 = FUN_0058ec60();
          if (iVar4 == 0) {
            *(undefined4 *)(param_1 + 0xf88) = 3;
          }
        }
      }
      FUN_005804b0();
    }
    if (*(int *)(param_1 + 0x2944) != 0) {
      FUN_00552050();
      *(undefined4 *)(param_1 + 0x2944) = 0;
    }
    FUN_00553e20();
  }
  return;
}

