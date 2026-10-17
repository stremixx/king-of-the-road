
float10 FUN_00506f90(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_8;
  int local_4;
  
  iVar2 = param_1;
  iVar4 = 2;
  iVar3 = 0;
  local_8 = 0.0;
  local_4 = 0;
  iVar1 = param_1 * 0x25c;
  if (1 < (int)(&DAT_00696858)[param_1 * 0x25c]) {
    do {
      fVar5 = (float10)FUN_00506dd0(iVar2,iVar4,param_2,&param_1);
      if ((float10)local_8 < fVar5) {
        local_8 = (float)fVar5;
        local_4 = param_1;
        iVar3 = iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= (int)(&DAT_00696858)[iVar1]);
  }
  *param_3 = iVar3;
  *param_4 = local_4;
  return (float10)local_8;
}

