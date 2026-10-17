
void __thiscall FUN_005e5e30(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [8];
  float local_4;
  
  pfVar1 = param_2;
  iVar2 = 0;
  if (*(short *)(param_1 + 4) != 0) {
    do {
      local_10 = *(float *)(*(int *)(param_1 + 0x14) + iVar2 * 4);
      local_24 = *(float *)(*(int *)(param_1 + 0x10) + iVar2 * 4) + *param_2;
      local_20 = param_2[1];
      local_1c = local_10 + param_2[2];
      FUN_005aae00(local_c,&local_24);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 4));
  }
  FUN_005aad50(local_c,(float)*(ushort *)(param_1 + 4));
  iVar2 = 0;
  param_2 = (float *)0x0;
  if (*(short *)(param_1 + 4) != 0) {
    do {
      local_4 = *(float *)(*(int *)(param_1 + 0x14) + iVar2 * 4);
      local_20 = pfVar1[1];
      local_1c = local_4 + pfVar1[2];
      local_18 = 0.0 - (*(float *)(*(int *)(param_1 + 0x10) + iVar2 * 4) + *pfVar1);
      local_14 = 0.0 - local_20;
      local_10 = 0.0 - local_1c;
      fVar3 = (float10)FUN_005aabc0(&local_18);
      if ((float10)(float)param_2 < fVar3) {
        param_2 = (float *)(float)fVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 4));
  }
  *pfVar1 = 0.0;
  pfVar1[1] = 0.0;
  pfVar1[3] = (float)param_2;
  pfVar1[2] = 0.0;
  return;
}

