
void __fastcall FUN_004b5bf0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  LONG LVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006440d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0064b0a0;
  local_4 = 0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    FUN_004b5520();
  }
  local_4._0_1_ = 1;
  FUN_004abfc0(param_1 + 8);
  FUN_004a2af0();
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_1[6] != 0) {
    iVar1 = param_1[0xf];
    for (uVar6 = param_1[0xb]; uVar6 < iVar1 + 4U; uVar6 = uVar6 + 4) {
      FUN_0061c888();
    }
    piVar2 = (int *)param_1[6];
    if (param_1[7] != 0) {
      uVar6 = param_1[7] * 4;
      if (uVar6 < 0x81) {
        LVar4 = InterlockedExchange(&DAT_0068c164,1);
        uVar3 = DAT_0066b83c;
        if (LVar4 != 0) {
          uVar7 = 0;
          if (DAT_0066b83c != 0) {
            uVar5 = DAT_0068c168 >> 1;
            do {
              if (((uVar5 <= uVar7) && (DAT_0068c164 == 0)) &&
                 (LVar4 = InterlockedExchange(&DAT_0068c164,1), LVar4 == 0)) {
                DAT_0066b83c = 1000;
                DAT_0068c168 = uVar7;
                goto LAB_004b5db7;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar3);
          }
          DAT_0066b83c = 0x1e;
          while (LVar4 = InterlockedExchange(&DAT_0068c164,1), LVar4 != 0) {
            FUN_00402b10();
          }
        }
LAB_004b5db7:
        *piVar2 = *(int *)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4);
        *(int **)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4) = piVar2;
        DAT_0068c164 = 0;
      }
      else {
        FUN_0061c888();
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_004af550();
  ExceptionList = local_c;
  return;
}

