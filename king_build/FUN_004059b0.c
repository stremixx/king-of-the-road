
void FUN_004059b0(uint *param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  double local_28;
  
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = DAT_0068be64 - (int)DAT_0068be60 >> 2;
  local_28 = 1e+36;
  piVar8 = DAT_0068be60;
  if (uVar5 != 0) {
    do {
      iVar1 = *piVar8;
      dVar2 = *param_2 - *(double *)(iVar1 + 0x30);
      dVar4 = param_2[1] - *(double *)(iVar1 + 0x38);
      dVar3 = param_2[2] - *(double *)(iVar1 + 0x40);
      dVar2 = SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4);
      if (dVar2 < local_28) {
        uVar7 = uVar6;
        local_28 = dVar2;
      }
      uVar6 = uVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar6 < uVar5);
  }
  *param_1 = uVar7;
  return;
}

