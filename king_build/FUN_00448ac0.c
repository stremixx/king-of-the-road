
void __fastcall FUN_00448ac0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void **ppvVar4;
  uint uVar5;
  LONG LVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063e238;
  puVar1 = (undefined4 *)param_1[1];
  puVar8 = (undefined4 *)*param_1;
  local_4 = 0;
  ppvVar4 = &local_c;
  local_c = ExceptionList;
  for (; ExceptionList = ppvVar4, puVar8 != puVar1; puVar8 = puVar8 + 3) {
    FUN_004030a0(*puVar8,puVar8[1]);
    FUN_0044a450();
    ppvVar4 = ExceptionList;
  }
  piVar2 = (int *)*param_1;
  iVar11 = (param_1[2] - (int)piVar2) / 0xc;
  if (iVar11 != 0) {
    uVar5 = iVar11 * 0xc;
    if (0x80 < uVar5) {
      FUN_0061c888(piVar2);
      ExceptionList = local_c;
      return;
    }
    LVar6 = InterlockedExchange(&DAT_0068c164,1);
    uVar3 = DAT_0066b83c;
    if (LVar6 != 0) {
      uVar9 = 0;
      if (DAT_0066b83c != 0) {
        uVar7 = DAT_0068c168 >> 1;
        do {
          if (((uVar7 <= uVar9) && (DAT_0068c164 == 0)) &&
             (LVar6 = InterlockedExchange(&DAT_0068c164,1), LVar6 == 0)) {
            DAT_0066b83c = 1000;
            DAT_0068c168 = uVar9;
            goto LAB_00448c49;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar3);
      }
      DAT_0066b83c = 0x1e;
      iVar11 = 6;
      while( true ) {
        iVar10 = iVar11;
        if (0x1b < iVar11) {
          iVar10 = 0x1b;
        }
        LVar6 = InterlockedExchange(&DAT_0068c164,1);
        if (LVar6 == 0) break;
        if (iVar10 < 0x15) {
          Sleep(0);
          iVar11 = iVar11 + 1;
        }
        else {
          Sleep(1 << ((char)iVar10 - 0x14U & 0x1f));
          iVar11 = iVar11 + 1;
        }
      }
    }
LAB_00448c49:
    *piVar2 = *(int *)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4) = piVar2;
    DAT_0068c164 = 0;
  }
  ExceptionList = local_c;
  return;
}

