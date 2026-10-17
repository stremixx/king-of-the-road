
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0048e030(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  float10 fVar5;
  int local_14;
  
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)((int)param_1 + 4);
  dVar4 = *param_1;
  dVar1 = *param_1;
  if (*param_2 <= _DAT_0064a668) {
    if ((*param_2 < _DAT_0064a668) &&
       (fVar5 = (float10)FUN_0048e470(uVar2,uVar3,0,0), (float10)*param_2 <= fVar5)) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 0;
      dVar1 = *param_2;
      *param_2 = (double)((float10)dVar1 - fVar5);
      if ((float10)_DAT_0064a668 < (float10)dVar1 - fVar5) {
        *(undefined4 *)param_2 = 0;
        *(undefined4 *)((int)param_2 + 4) = 0;
      }
      return 1;
    }
  }
  else {
    fVar5 = (float10)FUN_0048e470(uVar2,uVar3,0,0x3ff00000);
    if (fVar5 <= (float10)*param_2) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 0x3ff00000;
      dVar1 = *param_2;
      *param_2 = (double)((float10)dVar1 - fVar5);
      if ((float10)dVar1 - fVar5 < (float10)_DAT_0064a668) {
        *(undefined4 *)param_2 = 0;
        *(undefined4 *)((int)param_2 + 4) = 0;
      }
      return 1;
    }
  }
  local_14 = 6;
  do {
    fVar5 = (float10)FUN_0048e470(uVar2,uVar3,dVar4 + *param_3);
    local_14 = local_14 + -1;
    fVar5 = ((float10)*param_2 / fVar5) * (float10)*param_3;
    *param_3 = (double)fVar5;
  } while (local_14 != 0);
  fVar5 = fVar5 + (float10)dVar1;
  *param_1 = (double)fVar5;
  if (fVar5 <= (float10)_DAT_0064a660) {
    if (fVar5 < (float10)_DAT_0064a668) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 0;
    }
  }
  else {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0x3ff00000;
  }
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  return 0;
}

