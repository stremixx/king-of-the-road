
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0053c920(int param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 *param_5,
            float param_6,undefined4 param_7,int param_8,undefined4 param_9,float param_10,
            undefined4 param_11)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  if (*(int *)(param_1 + 0x578) == 0) {
    param_4 = ABS(param_4) / *(float *)(param_1 + 0x4f4);
    param_6 = param_6 / *(float *)(param_1 + 0x4ec);
    fVar1 = *(float *)(param_1 + 0x4fc);
    if (_DAT_0064b240 < param_4) {
      param_4 = 1.0;
    }
    if (_DAT_0064b240 < param_6) {
      param_6 = _DAT_0064b240;
    }
    fVar2 = *(float *)(param_1 + 0x4f8);
    if (*(int *)(param_1 + 0x428) != 0) {
      uVar3 = FUN_005ab6d0(local_60,param_6 * *(float *)(param_1 + 0x4f0),param_1 + 0x45c);
      uVar3 = FUN_005ab130(local_30,uVar3);
      FUN_004e4172(*(undefined4 *)(param_1 + 0x428),0,uVar3);
    }
    if (*(int *)(param_1 + 0x42c) != 0) {
      uVar3 = FUN_005ab6d0(local_30,param_4 * fVar2,param_1 + 0x48c);
      uVar3 = FUN_005ab130(local_60,uVar3);
      FUN_004e4172(*(undefined4 *)(param_1 + 0x42c),0,uVar3);
    }
    if (*(int *)(param_1 + 0x430) != 0) {
      uVar3 = FUN_005ab6d0(local_30,param_10 * fVar1,param_1 + 0x4bc);
      uVar3 = FUN_005ab130(local_60,uVar3);
      FUN_004e4172(*(undefined4 *)(param_1 + 0x430),0,uVar3);
      return;
    }
  }
  else if (*(int *)(DAT_00695c10 + 0x12fc) != 0) {
    fVar1 = *(float *)(DAT_00695c10 + 0x13d4);
    fVar2 = *(float *)(DAT_00695c10 + 0x13d0);
    if (*(int *)(DAT_00695c10 + 0x130c) != 0) {
      uVar3 = FUN_005ab6d0(local_30,param_6 * *(float *)(DAT_00695c10 + 0x13cc),
                           DAT_00695c10 + 0x133c);
      uVar3 = FUN_005ab130(local_60,uVar3);
      FUN_004e4172(*(undefined4 *)(DAT_00695c10 + 0x130c),0,uVar3);
    }
    if (*(int *)(DAT_00695c10 + 0x1310) != 0) {
      uVar3 = FUN_005ab6d0(local_30,ABS(param_4) * fVar1,DAT_00695c10 + 0x136c);
      uVar3 = FUN_005ab130(local_60,uVar3);
      FUN_004e4172(*(undefined4 *)(DAT_00695c10 + 0x1310),0,uVar3);
    }
    if (*(int *)(DAT_00695c10 + 0x1314) != 0) {
      uVar3 = FUN_005ab6d0(local_30,param_10 * fVar2,DAT_00695c10 + 0x139c);
      uVar3 = FUN_005ab130(local_60,uVar3);
      FUN_004e4172(*(undefined4 *)(DAT_00695c10 + 0x1314),0,uVar3);
    }
    if (*(int *)(DAT_00695c10 + 0x1318) != 0) {
      FUN_004e4132(*(int *)(DAT_00695c10 + 0x1318),param_7);
    }
    if (*(int *)(DAT_00695c10 + 0x131c) != 0) {
      FUN_004e4132(*(int *)(DAT_00695c10 + 0x131c),param_8 == 0);
    }
    if (*(int *)(DAT_00695c10 + 0x1320) != 0) {
      FUN_004e4132(*(int *)(DAT_00695c10 + 0x1320),param_9);
    }
    if (*(int *)(DAT_00695c10 + 0x1324) != 0) {
      FUN_004e4132(*(int *)(DAT_00695c10 + 0x1324),param_11);
    }
    iVar5 = 0x1338;
    iVar4 = DAT_00695c10;
    do {
      if (*(int *)(iVar5 + iVar4) != 0) {
        FUN_004e409c(*(int *)(iVar5 + iVar4),*param_5);
        iVar4 = DAT_00695c10;
      }
      iVar5 = iVar5 + -4;
      param_5 = param_5 + 1;
    } while (0x1324 < iVar5);
  }
  return;
}

