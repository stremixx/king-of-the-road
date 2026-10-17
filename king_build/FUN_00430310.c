
void FUN_00430310(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack_60;
  int **ppiStack_5c;
  int **ppiStack_58;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  int *local_3c;
  int local_38;
  int local_34;
  int local_30 [2];
  int local_28;
  int *local_24 [2];
  uint local_1c;
  int *apiStack_18 [2];
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063d4f8;
  local_c = ExceptionList;
  piVar3 = DAT_0068bf38;
  ExceptionList = &local_c;
  if (DAT_0068bf38 != DAT_0068bf3c) {
    do {
      local_3c = (int *)0x0;
      local_38 = 0;
      local_34 = 0;
      ppiStack_58 = (int **)(*piVar3 + 0x54);
      local_4 = 0;
      ppiStack_5c = (int **)0x430365;
      FUN_0040c060();
      while ((char)local_34 == '\x02') {
        ppiStack_58 = &local_3c;
        ppiStack_5c = local_24;
        uStack_60 = 0x43037f;
        piVar1 = (int *)FUN_00407ec0();
        ppiStack_58 = (int **)0x43038d;
        FUN_004042a0();
        local_4._0_1_ = 3;
        if ((undefined4 *)*piVar1 == (undefined4 *)0x0) {
          local_30[0] = 0;
          local_28 = 0;
        }
        else {
          ppiStack_58 = (int **)0x43039c;
          iVar2 = (*(code *)**(undefined4 **)*piVar1)();
          if (iVar2 == 9) {
            local_30[0] = *piVar1;
            local_28 = piVar1[2];
            *(int *)(local_30[0] + 4) = *(int *)(local_30[0] + 4) + 1;
          }
          else {
            ppiStack_58 = (int **)s_Identifier_0066be4c;
            ppiStack_5c = (int **)0x4303ad;
            ppiStack_5c = (int **)(**(code **)(*(int *)*piVar1 + 4))();
            uStack_60 = 1;
            FUN_004a5670(2);
          }
        }
        local_4._0_1_ = 5;
        if (((((local_1c & 0x10000) == 0) && (local_24[0] != (int *)0x0)) &&
            (local_24[0][1] = local_24[0][1] + -1, local_24[0][1] == 0)) &&
           (local_24[0] != (int *)0x0)) {
          ppiStack_58 = (int **)0x1;
          ppiStack_5c = (int **)0x43040a;
          (**(code **)(*local_24[0] + 0xc))();
        }
        puStack_40 = (undefined1 *)&uStack_60;
        FUN_00455dc0(local_30);
        uStack_44 = FUN_0040e460();
        ppiStack_58 = (int **)&uStack_44;
        ppiStack_5c = (int **)0x430438;
        FUN_00448a90();
        local_4._0_1_ = 0;
        ppiStack_58 = (int **)0x430445;
        FUN_00492340();
        ppiStack_58 = &local_3c;
        ppiStack_5c = apiStack_18;
        uStack_60 = 0x430454;
        piVar1 = (int *)FUN_00407f50();
        local_4 = CONCAT31(local_4._1_3_,1);
        if ((((local_3c != (int *)0x0) && (local_3c[1] = local_3c[1] + -1, local_3c[1] == 0)) &&
            ((local_3c != (int *)*piVar1 || ((local_34 != piVar1[2] || (local_38 != piVar1[1]))))))
           && (local_3c != (int *)0x0)) {
          ppiStack_58 = (int **)0x1;
          ppiStack_5c = (int **)0x43049b;
          (**(code **)(*local_3c + 0xc))();
        }
        if ((undefined4 *)*piVar1 == (undefined4 *)0x0) {
          local_3c = (int *)0x0;
          local_34 = 0;
LAB_004304e3:
          local_38 = 0;
        }
        else {
          ppiStack_58 = (int **)0x4304a5;
          iVar2 = (*(code *)**(undefined4 **)*piVar1)();
          if (iVar2 == 2) {
            local_3c = (int *)*piVar1;
            local_34 = piVar1[2];
            local_3c[1] = local_3c[1] + 1;
            goto LAB_004304e3;
          }
          ppiStack_58 = (int **)&DAT_0066bb08;
          ppiStack_5c = (int **)0x4304b6;
          ppiStack_5c = (int **)(**(code **)(*(int *)*piVar1 + 4))();
          uStack_60 = 1;
          FUN_004a5670(2);
        }
        local_4 = local_4 & 0xffffff00;
        if (((((uStack_10 & 0x10000) == 0) && (apiStack_18[0] != (int *)0x0)) &&
            (apiStack_18[0][1] = apiStack_18[0][1] + -1, apiStack_18[0][1] == 0)) &&
           (apiStack_18[0] != (int *)0x0)) {
          ppiStack_58 = (int **)0x1;
          ppiStack_5c = (int **)0x430516;
          (**(code **)(*apiStack_18[0] + 0xc))();
        }
      }
      local_4 = 0xffffffff;
      ppiStack_58 = (int **)0x430532;
      FUN_00492340();
      piVar3 = piVar3 + 1;
    } while (piVar3 != DAT_0068bf3c);
  }
  ExceptionList = local_c;
  return;
}

