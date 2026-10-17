
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a4390(int *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int local_14;
  int local_10;
  
  if (param_1[4] == 0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfe;
  }
  if ((*(byte *)(param_1 + 0x2b) & 1) == 0) {
    iVar6 = __ftol();
    param_1[0x1e] = iVar6 % param_1[0x1b];
  }
  else {
    iVar6 = __ftol();
    param_1[0x1e] = iVar6;
    if (param_1[0x1b] <= iVar6) {
      param_1[0x1e] = param_1[0x1b] + -1;
    }
  }
  iVar6 = param_1[0x1e] / param_1[0x1c];
  local_10 = param_1[0x1f];
  local_14 = 0;
  if (0 < local_10) {
    fVar4 = (float)(param_1[0x1e] % param_1[0x1c]);
    iVar7 = 0;
    fVar2 = (float)(iVar6 + 1);
    fVar3 = (float)iVar6;
    do {
      fVar5 = (float)local_14;
      local_14 = local_14 + 1;
      puVar1 = (undefined4 *)(param_1[0x15] + 8 + iVar7);
      iVar7 = iVar7 + 0x28;
      *(float *)*puVar1 =
           fVar4 * (float)*(double *)(param_1 + 0x26) +
           (fVar5 * (float)*(double *)(param_1 + 0x26)) / (float)local_10;
      *(float *)(*(int *)(param_1[0x15] + -0x20 + iVar7) + 4) =
           fVar4 * (float)*(double *)(param_1 + 0x26) +
           ((float)local_14 * (float)*(double *)(param_1 + 0x26)) / (float)param_1[0x1f];
      *(float *)(*(int *)(param_1[0x15] + -0x20 + iVar7) + 0xc) =
           fVar4 * (float)*(double *)(param_1 + 0x26) +
           (fVar5 * (float)*(double *)(param_1 + 0x26)) / (float)param_1[0x1f];
      *(float *)(*(int *)(param_1[0x15] + -0x20 + iVar7) + 8) =
           fVar4 * (float)*(double *)(param_1 + 0x26) +
           ((float)local_14 * (float)*(double *)(param_1 + 0x26)) / (float)param_1[0x1f];
      **(float **)(param_1[0x15] + -0x1c + iVar7) = fVar2 * (float)*(double *)(param_1 + 0x28);
      *(float *)(*(int *)(param_1[0x15] + -0x1c + iVar7) + 4) =
           fVar2 * (float)*(double *)(param_1 + 0x28);
      *(float *)(*(int *)(param_1[0x15] + -0x1c + iVar7) + 8) =
           fVar3 * (float)*(double *)(param_1 + 0x28);
      *(float *)(*(int *)(param_1[0x15] + -0x1c + iVar7) + 0xc) =
           fVar3 * (float)*(double *)(param_1 + 0x28);
      local_10 = param_1[0x1f];
    } while (local_14 < local_10);
  }
  if ((_DAT_0064a668 < *(double *)(param_1 + 0x22)) &&
     (*(double *)(param_1 + 0x22) < *(double *)(param_1 + 0x24))) {
    (**(code **)(*param_1 + 0x1c))(1);
    return;
  }
  *(double *)(param_1 + 0x24) = *(double *)(param_1[0x19] + 0xb90) + *(double *)(param_1 + 0x24);
  FUN_005d29a0(1);
  return;
}

