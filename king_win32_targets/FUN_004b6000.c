
void __fastcall FUN_004b6000(int *param_1)

{
  int *piVar1;
  uint uVar2;
  LONG LVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006440e8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004abfc0(param_1 + 2);
  FUN_004a2af0();
  if (*param_1 != 0) {
    iVar5 = param_1[9];
    for (uVar6 = param_1[5]; uVar6 < iVar5 + 4U; uVar6 = uVar6 + 4) {
      FUN_0061c888();
    }
    piVar1 = (int *)*param_1;
    if (param_1[1] != 0) {
      uVar6 = param_1[1] * 4;
      if (0x80 < uVar6) {
        FUN_0061c888();
        ExceptionList = local_c;
        return;
      }
      LVar3 = InterlockedExchange(&DAT_0068c164,1);
      uVar2 = DAT_0066b83c;
      if (LVar3 != 0) {
        uVar7 = 0;
        if (DAT_0066b83c != 0) {
          uVar4 = DAT_0068c168 >> 1;
          do {
            if (((uVar4 <= uVar7) && (DAT_0068c164 == 0)) &&
               (LVar3 = InterlockedExchange(&DAT_0068c164,1), LVar3 == 0)) {
              DAT_0066b83c = 1000;
              DAT_0068c168 = uVar7;
              goto LAB_004b61b4;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar2);
        }
        DAT_0066b83c = 0x1e;
        iVar5 = 6;
        while( true ) {
          iVar8 = iVar5;
          if (0x1b < iVar5) {
            iVar8 = 0x1b;
          }
          LVar3 = InterlockedExchange(&DAT_0068c164,1);
          if (LVar3 == 0) break;
          if (iVar8 < 0x15) {
            Sleep(0);
            iVar5 = iVar5 + 1;
          }
          else {
            Sleep(1 << ((char)iVar8 - 0x14U & 0x1f));
            iVar5 = iVar5 + 1;
          }
        }
      }
LAB_004b61b4:
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
  }
  ExceptionList = local_c;
  return;
}

