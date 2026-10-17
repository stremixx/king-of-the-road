
void __thiscall FUN_005c4e10(int param_1,undefined4 param_2)

{
  int iVar1;
  float10 fVar2;
  int local_16c;
  int local_168;
  int local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  double local_154;
  undefined1 local_130 [4];
  undefined1 local_12c [8];
  int local_124;
  int local_120;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064822c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006022c0();
  local_4 = 0;
  FUN_006022a0();
  local_4._0_1_ = 1;
  local_158 = 0;
  fVar2 = (float10)thunk_FUN_00603580();
  local_154 = (double)fVar2;
  local_4 = CONCAT31(local_4._1_3_,2);
  do {
    do {
      do {
        if ((*(int *)(param_1 + 0x1a0) == 0) || (iVar1 = FUN_006006d0(&local_164), iVar1 != 0)) {
          local_4 = local_4 & 0xffffff00;
          FUN_006022b0();
          local_4 = 0xffffffff;
          FUN_00602560();
          ExceptionList = local_c;
          return;
        }
      } while (local_164 != 4);
      *(undefined4 *)(param_1 + 0x198) = local_158;
      FUN_00602850(local_160,local_15c);
      iVar1 = FUN_006029d0();
    } while (iVar1 != 0);
    do {
      iVar1 = FUN_006028c0(&local_168);
      if (iVar1 != 0) break;
      if (local_168 == 0x78) {
        iVar1 = FUN_00602bc0(&local_16c,local_10c,local_12c);
        if ((iVar1 == 0) && (local_16c == 0x386)) {
          FUN_005c4b20(local_10c,param_2);
        }
      }
      else if (((local_168 == 0x2d) && (iVar1 = FUN_00602b80(&local_16c,local_130), iVar1 == 0)) &&
              (local_16c == 0x386)) {
        FUN_006022c0();
        local_4._0_1_ = 3;
        FUN_00602790(0x385,0);
        FUN_00601840(*(undefined4 *)(param_1 + 0x198),local_124,local_120 - local_124);
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_00602560();
      }
      iVar1 = FUN_006029e0();
    } while (iVar1 == 0);
  } while( true );
}

