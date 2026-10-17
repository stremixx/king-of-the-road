
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b5840(void)

{
  int iVar1;
  float10 fVar2;
  int *piVar3;
  double dVar4;
  
  if (DAT_0071f868 != (int *)0x0) {
    fVar2 = (float10)thunk_FUN_00603580();
    dVar4 = (double)fVar2;
    piVar3 = DAT_0071f868;
    iVar1 = (**(code **)(*DAT_0071f868 + 0x18))(DAT_0071f868,dVar4);
    if (iVar1 != 0) {
      dVar4 = (double)CONCAT44(SUB84(dVar4,0),piVar3) + _DAT_0064a850;
      do {
        fVar2 = (float10)thunk_FUN_00603580();
        if ((float10)dVar4 <= fVar2) {
          return;
        }
        iVar1 = (**(code **)(*DAT_0071f868 + 0x18))(DAT_0071f868);
      } while (iVar1 != 0);
    }
  }
  return;
}

