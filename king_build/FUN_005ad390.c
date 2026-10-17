
void __thiscall
FUN_005ad390(int param_1,undefined4 param_2,undefined4 param_3,double param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EDI;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  fVar6 = (float10)param_4 / (float10)*(double *)(param_1 + 0x2110);
  *(int *)(param_1 + 0x2160) = param_5;
  *(float *)(param_1 + 0x2158) = (float)fVar6;
  fVar7 = (float10)(double)CONCAT44(param_3,param_2) / (float10)*(double *)(param_1 + 0x2110);
  *(float *)(param_1 + 0x215c) = (float)fVar7;
  if (-1 < param_5) {
    FUN_005b97d0((float)fVar7,(float)fVar6,param_5);
  }
  if (DAT_0071f868 != (int *)0x0) {
    if (((byte)DAT_00701dec & 4) != 0) {
      uVar9 = 1;
      uVar8 = 0x1c;
      (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x1c,1);
      iVar2 = thunk_FUN_005b5b70();
      piVar1 = DAT_0071f868;
      if (iVar2 != 0) {
        iVar2 = *DAT_0071f868;
        uVar3 = __ftol();
        uVar4 = __ftol();
        uVar5 = __ftol();
        (**(code **)(iVar2 + 0x50))(piVar1,0x22,((uVar3 | 0xffffff00) << 8 | uVar4) << 8 | uVar5);
      }
      (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x8c,3);
      (**(code **)(*DAT_0071f868 + 0x50))
                (DAT_0071f868,0x24,(float)(double)CONCAT44(unaff_EDI,uVar9));
      (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x25,(float)(double)CONCAT44(uVar9,uVar8));
      return;
    }
    (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x1c,0);
  }
  return;
}

