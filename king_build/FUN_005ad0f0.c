
int __thiscall FUN_005ad0f0(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = *(int *)(param_1 + 0x2030);
  if (0 < iVar6) {
    iVar7 = 0;
    fVar2 = *param_2;
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    local_4 = param_2[3];
    iVar5 = *(int *)(param_1 + 0x202c) * 0x30;
    pfVar1 = (float *)(iVar5 + 0x1460 + param_1);
    local_10 = fVar2 * *pfVar1 +
               fVar3 * *(float *)(iVar5 + 0x146c + param_1) +
               fVar4 * *(float *)(iVar5 + 0x1478 + param_1) + pfVar1[9];
    local_c = fVar2 * pfVar1[1] + fVar3 * pfVar1[4] + fVar4 * pfVar1[7] + pfVar1[10];
    local_8 = fVar2 * pfVar1[2] + fVar3 * pfVar1[5] + fVar4 * pfVar1[8] + pfVar1[0xb];
    if (-1 < iVar6 + -1) {
      do {
        iVar5 = FUN_005accd0(&local_10);
        if (iVar7 < iVar5) {
          iVar7 = iVar5;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    return iVar7;
  }
  return 0;
}

