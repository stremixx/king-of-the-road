
uint * FUN_00418a00(uint *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063c928;
  local_c = ExceptionList;
  local_1c = 0;
  ExceptionList = &local_c;
  do {
    iVar7 = DAT_0068bbf8;
    iVar3 = DAT_0068bbfc - DAT_0068bbf8;
    DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
    DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
    (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
    uVar4 = (uint)(&DAT_0068a928)[DAT_0068aa04] % (uint)(iVar3 >> 2);
    puVar5 = (undefined4 *)0x0;
    iVar7 = *(int *)(iVar7 + uVar4 * 4);
    puVar6 = (undefined4 *)0x0;
    local_18 = (undefined4 *)0x0;
    local_10 = (undefined4 *)0x0;
    piVar1 = (int *)(iVar7 + 0x1c);
    puVar2 = (undefined4 *)0x0;
    local_14 = (undefined4 *)0x0;
    local_20 = *piVar1;
    local_4 = 0;
    if (local_20 != *(int *)(iVar7 + 0x20)) {
      do {
        if (*(int *)(local_20 + 8) == DAT_0068a8f0) {
          if (puVar2 == puVar6) {
            FUN_00456150(puVar2,&local_20);
            puVar2 = local_14;
            puVar5 = local_18;
            puVar6 = local_10;
          }
          else {
            FUN_00460970(puVar2,&local_20);
            local_14 = local_14 + 1;
            puVar2 = local_14;
            puVar5 = local_18;
            puVar6 = local_10;
          }
        }
        local_20 = local_20 + 0x24;
      } while (local_20 != *(int *)(iVar7 + 0x20));
      if (puVar5 != puVar2) {
        FUN_0045cf10(puVar5,puVar2,0,0,piVar1);
        puVar2 = local_18;
        *param_2 = (local_14[-1] - *piVar1) / 0x24;
        *param_1 = uVar4;
        iVar7 = (int)local_10 - (int)local_18 >> 2;
        if (iVar7 != 0) {
          uVar4 = iVar7 * 4;
          if (0x80 < uVar4) {
            FUN_0061c888(local_18);
            ExceptionList = local_c;
            return param_1;
          }
          FUN_00401aa0();
          *puVar2 = *(undefined4 *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
          *(undefined4 **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = puVar2;
          DAT_0068c164 = 0;
        }
        ExceptionList = local_c;
        return param_1;
      }
    }
    local_4 = 0xffffffff;
    iVar7 = (int)puVar6 - (int)puVar5 >> 2;
    if (iVar7 != 0) {
      uVar4 = iVar7 * 4;
      if (uVar4 < 0x81) {
        FUN_00401aa0();
        *puVar5 = *(undefined4 *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
        *(undefined4 **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = puVar5;
        DAT_0068c164 = 0;
      }
      else {
        FUN_0061c888(puVar5);
      }
    }
    local_1c = local_1c + 1;
    if (999 < local_1c) {
      FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x120a,
                   s_AI_Parking_place_limit_exhausted_0066c32c,&DAT_0068c120,&DAT_0068c120);
      *param_2 = -1;
      *param_1 = 0xffffffff;
      ExceptionList = local_c;
      return param_1;
    }
  } while( true );
}

