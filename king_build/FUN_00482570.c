
/* WARNING: Removing unreachable block (ram,0x004826e8) */
/* WARNING: Removing unreachable block (ram,0x004826fa) */
/* WARNING: Removing unreachable block (ram,0x004826ef) */

void FUN_00482570(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006402e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00490cf0(param_1,&local_10,&local_18,&local_14);
  if (local_10 == DAT_0066ee74) {
    iVar7 = *(int *)*piVar3;
    local_4 = 1;
    *piVar3 = (int)((int *)*piVar3 + 1);
    FUN_004471c0(0,0);
    FUN_0047abc0(iVar7);
    piVar5 = DAT_006898d4;
    for (; DAT_006898d4 = piVar5, iVar7 != 0; iVar7 = iVar7 + -1) {
      param_1._1_3_ = (undefined3)((uint)param_1 >> 8);
      param_1 = (int *)CONCAT31(param_1._1_3_,*(undefined1 *)*piVar3);
      *piVar3 = (int)((undefined1 *)*piVar3 + 1);
      FUN_0047ac10(&param_1);
      piVar5 = DAT_006898d4;
    }
    param_1 = (int *)0x0;
    piVar8 = DAT_006898d0;
    while ((piVar8 != piVar5 && (cVar4 = FUN_00407280(*piVar8), cVar4 == '\0'))) {
      piVar8 = piVar8 + 1;
    }
    if (piVar8 == DAT_006898d4) {
      FUN_00401010(0,0x100,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                   s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x1d0,s_Can_not_find_ambush_0066ee7c,
                   0,&DAT_0068c120);
    }
    *(undefined1 *)(*piVar8 + 0xf0) = *(undefined1 *)*piVar3;
    iVar7 = *piVar3;
    *piVar3 = iVar7 + 1;
    *(undefined1 *)(*piVar8 + 0x1c) = *(undefined1 *)(iVar7 + 1);
    iVar7 = *piVar3;
    piVar5 = (int *)(iVar7 + 1);
    *piVar3 = (int)piVar5;
    iVar2 = *piVar8;
    iVar6 = *piVar5;
    *piVar3 = iVar7 + 5;
    FUN_004471c0(*(undefined4 *)(iVar2 + 0x80),*(undefined4 *)(iVar2 + 0x84));
    FUN_0047abc0(iVar6);
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar1 = *(undefined1 *)*piVar3;
      *piVar3 = (int)((undefined1 *)*piVar3 + 1);
      param_1._1_3_ = (undefined3)((uint)param_1 >> 8);
      param_1 = (int *)CONCAT31(param_1._1_3_,uVar1);
      FUN_0047ac10(&param_1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00490d20(piVar3,local_18,local_14);
  ExceptionList = local_c;
  return;
}

