
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005cbd80(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 local_158;
  float local_154 [12];
  undefined1 auStack_124 [4];
  undefined1 local_120 [44];
  undefined1 auStack_f4 [4];
  undefined1 local_f0 [44];
  undefined1 auStack_c4 [4];
  undefined1 local_c0 [44];
  undefined1 auStack_94 [4];
  undefined1 local_90 [44];
  undefined1 auStack_64 [4];
  undefined1 local_60 [44];
  undefined1 auStack_34 [4];
  undefined1 local_30 [48];
  
  if (param_2 < *(int *)(param_1 + 0x20)) {
    if (param_4 != (int *)0x0) {
      fVar6 = (float10)FUN_005cb320();
      fVar1 = (float)(fVar6 * (float10)*(float *)(param_1 + 0x1c));
      fVar7 = (float10)FUN_005cb300(*(undefined4 *)(param_1 + 0x28));
      fVar2 = *(float *)(param_1 + 0x10);
      fVar3 = *(float *)(param_1 + 0x18);
      fVar6 = (float10)_DAT_0064b8f0;
      local_158 = 0;
      fVar4 = *(float *)(param_1 + 0x14) * _DAT_00650d14;
      local_154[0] = fVar1;
      uVar5 = FUN_005ab330(local_c0,0,0,fVar1,param_3);
      uVar5 = FUN_005ab6d0(local_120,
                           (float)((float10)fVar3 * fVar6 + fVar7 * (float10)fVar2) * _DAT_00650d14,
                           uVar5);
      uVar5 = FUN_005ab7d0(local_f0,fVar4,uVar5);
      uVar5 = FUN_005ab130(local_90,uVar5);
      uVar5 = FUN_005ab130(local_30,uVar5);
      FUN_005ab130(local_60,uVar5);
      uVar5 = (**(code **)*param_4)(fVar1);
      FUN_005cbd80(param_2 + 1,auStack_64,uVar5);
      fVar8 = (float10)FUN_005cb300(*(undefined4 *)(param_1 + 0x28));
      fVar7 = (float10)_DAT_0064b240;
      fVar1 = *(float *)(param_1 + 0x10);
      fVar9 = (float10)_DAT_0064b240;
      fVar2 = *(float *)(param_1 + 0x18);
      fVar6 = (float10)_DAT_0064b8f0;
      fVar3 = *(float *)(param_1 + 0x14) * _DAT_00650d14;
      uVar5 = FUN_005ab330(auStack_34,0,0,unaff_EBX,param_3);
      uVar5 = FUN_005ab6d0(auStack_94,
                           (float)((fVar9 - (float10)fVar2) * fVar6 +
                                  (fVar7 - fVar8) * (float10)fVar1) * _DAT_00650d10,uVar5);
      uVar5 = FUN_005ab7d0(auStack_f4,fVar3,uVar5);
      uVar5 = FUN_005ab130(auStack_124,uVar5);
      uVar5 = FUN_005ab130(auStack_c4,uVar5);
      FUN_005ab130(local_154,uVar5);
      uVar5 = (**(code **)(*param_4 + 4))(unaff_EBX);
      FUN_005cbd80(param_2 + 1,&local_158,uVar5);
      return;
    }
  }
  else if (param_4 != (int *)0x0) {
    FUN_005cbcf0(param_3,param_4[9]);
    return;
  }
  FUN_005cbcf0(param_3,0);
  return;
}

