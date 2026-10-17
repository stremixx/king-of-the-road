
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00623fcc(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < _DAT_0064a668) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_00687f88;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_00624057:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (_DAT_0064a668 < param_3) goto LAB_006240f2;
        if (param_3 < _DAT_0064a668) goto LAB_00624089;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_006240fc(param_3);
        if (_DAT_0064a668 < param_3) {
          dVar2 = _DAT_00687f88;
          if (iVar3 == 1) {
            dVar2 = -_DAT_00687f88;
          }
          goto LAB_006240f2;
        }
        if (param_3 < _DAT_0064a668) {
          dVar2 = _DAT_00687fa8;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_006240f2;
        }
      }
      dVar2 = 1.0;
      goto LAB_006240f2;
    }
    if (_DAT_0064a660 < dVar1) goto LAB_006240f2;
    if (_DAT_0064a660 <= dVar1) {
LAB_0062401c:
      *param_4 = _DAT_00687f90;
      return 1;
    }
  }
  else {
    if ((param_3._4_4_ != -0x100000) || (param_3._0_4_ != 0)) goto LAB_00624057;
    if (dVar1 <= _DAT_0064a660) {
      if (_DAT_0064a660 <= dVar1) goto LAB_0062401c;
      goto LAB_006240f2;
    }
  }
LAB_00624089:
  dVar2 = 0.0;
LAB_006240f2:
  *param_4 = dVar2;
  return 0;
}

