
bool FUN_0062779d(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  if (DAT_006882d4 != 0) {
    iVar2 = param_1[5];
    if ((iVar2 != DAT_00688368) || (iVar2 != DAT_00688378)) {
      if (DAT_0072d310 == 0) {
        FUN_00627949(1,1,iVar2,4,1,0,0,2,0,0,0);
        FUN_00627949(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_0072d3b0 != 0) {
          uVar4 = 0;
          uVar3 = 0;
          uVar5 = DAT_0072d3b6;
        }
        else {
          uVar4 = DAT_0072d3b4;
          uVar3 = DAT_0072d3b6;
          uVar5 = 0;
        }
        FUN_00627949(1,DAT_0072d3b0 == 0,iVar2,DAT_0072d3b2,uVar3,uVar4,uVar5,DAT_0072d3b8,
                     DAT_0072d3ba,DAT_0072d3bc,DAT_0072d3be);
        if (DAT_0072d35c != 0) {
          uVar4 = 0;
          uVar3 = 0;
          iVar2 = param_1[5];
          uVar5 = DAT_0072d362;
        }
        else {
          iVar2 = param_1[5];
          uVar4 = DAT_0072d360;
          uVar3 = DAT_0072d362;
          uVar5 = 0;
        }
        FUN_00627949(0,DAT_0072d35c == 0,iVar2,DAT_0072d35e,uVar3,uVar4,uVar5,DAT_0072d364,
                     DAT_0072d366,DAT_0072d368,DAT_0072d36a);
      }
    }
    iVar2 = param_1[7];
    if (DAT_0068836c < DAT_0068837c) {
      if ((DAT_0068836c <= iVar2) && (iVar2 <= DAT_0068837c)) {
        if ((DAT_0068836c < iVar2) && (iVar2 < DAT_0068837c)) {
          return true;
        }
LAB_00627915:
        iVar1 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar2 == DAT_0068836c) {
          return DAT_00688370 <= iVar1;
        }
        return iVar1 < DAT_00688380;
      }
    }
    else {
      if (iVar2 < DAT_0068837c) {
        return true;
      }
      if (DAT_0068836c < iVar2) {
        return true;
      }
      if ((iVar2 <= DAT_0068837c) || (DAT_0068836c <= iVar2)) goto LAB_00627915;
    }
  }
  return false;
}

