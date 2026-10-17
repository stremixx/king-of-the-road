
undefined4 FUN_0046de00(void)

{
  int iVar1;
  uint uVar2;
  LONG LVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f8c8;
  local_c = ExceptionList;
  if ((DAT_0068c27c != '\0') && (DAT_0066e62b != '\0')) {
    ExceptionList = &local_c;
    local_24 = FUN_00483b40();
    local_28 = (int *)*DAT_0068a8f0;
    if (local_28 != DAT_0068a8f0) {
      do {
        local_1c = (undefined4 *)&stack0xffffffc0;
        iVar1 = FUN_0040a950();
        if ((*(uint *)(iVar1 + 0x58) & 0x100) == 0) {
          local_18 = (undefined4 *)0x0;
          local_14 = 0;
          local_10 = 0;
          local_1c = (undefined4 *)&stack0xffffffbc;
          local_4 = 0;
          FUN_0041d3f0(&local_28);
          FUN_0040a950();
          FUN_00475970();
          FUN_006027f0(0x3e0);
          uVar2 = local_10 - (int)local_18;
          local_4 = 0xffffffff;
          if (uVar2 != 0) {
            if (uVar2 < 0x81) {
              local_1c = local_18;
              local_20 = (undefined4 *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
              LVar3 = InterlockedExchange(&DAT_0068c164,1);
              uVar2 = DAT_0066b83c;
              if (LVar3 != 0) {
                uVar5 = 0;
                if (DAT_0066b83c != 0) {
                  uVar4 = DAT_0068c168 >> 1;
                  do {
                    if (((uVar4 <= uVar5) && (DAT_0068c164 == 0)) &&
                       (LVar3 = InterlockedExchange(&DAT_0068c164,1), LVar3 == 0)) {
                      DAT_0066b83c = 1000;
                      DAT_0068c168 = uVar5;
                      goto LAB_0046dfde;
                    }
                    uVar5 = uVar5 + 1;
                  } while (uVar5 < uVar2);
                }
                DAT_0066b83c = 0x1e;
                iVar1 = 6;
                while( true ) {
                  iVar6 = iVar1;
                  if (0x1b < iVar1) {
                    iVar6 = 0x1b;
                  }
                  LVar3 = InterlockedExchange(&DAT_0068c164,1);
                  if (LVar3 == 0) break;
                  if (iVar6 < 0x15) {
                    Sleep(0);
                    iVar1 = iVar1 + 1;
                  }
                  else {
                    Sleep(1 << ((char)iVar6 - 0x14U & 0x1f));
                    iVar1 = iVar1 + 1;
                  }
                }
              }
LAB_0046dfde:
              *local_1c = *local_20;
              *local_20 = local_1c;
              DAT_0068c164 = 0;
            }
            else {
              FUN_0061c888();
            }
          }
        }
        local_28 = (int *)*local_28;
      } while (local_28 != DAT_0068a8f0);
    }
  }
  ExceptionList = local_c;
  return 0;
}

