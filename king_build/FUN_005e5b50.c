
void __thiscall FUN_005e5b50(int param_1,undefined4 *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = (int)param_3;
  iVar4 = 0;
  if (*(short *)(param_1 + 4) != 0) {
    do {
      FUN_005aae00(&local_c,(int)param_3 +
                            (uint)*(ushort *)(*(int *)(param_1 + 8) + iVar4 * 2) * 0x1c);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 4));
  }
  FUN_005aad50(&local_c,(float)*(ushort *)(param_1 + 4));
  iVar4 = 0;
  param_3 = 0.0;
  if (*(short *)(param_1 + 4) != 0) {
    do {
      uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 8) + iVar4 * 2);
      local_c = 0.0 - *(float *)(iVar2 + uVar3 * 0x1c);
      iVar1 = iVar2 + uVar3 * 0x1c;
      local_8 = 0.0 - *(float *)(iVar1 + 4);
      local_4 = 0.0 - *(float *)(iVar1 + 8);
      fVar5 = (float10)FUN_005aabc0(&local_c);
      if ((float10)param_3 < fVar5) {
        param_3 = (float)fVar5;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 4));
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = param_3;
  return;
}

