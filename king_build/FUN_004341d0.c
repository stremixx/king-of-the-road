
void FUN_004341d0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_8;
  int local_4;
  
  piVar2 = DAT_0068be60;
  if (DAT_0068be60 != DAT_0068be64) {
    do {
      iVar8 = *piVar2;
      piVar2 = piVar2 + 1;
      *(undefined4 *)(iVar8 + 0xac) = 0xffffffff;
    } while (piVar2 != DAT_0068be64);
  }
  local_4 = DAT_0068bbf8;
  iVar8 = DAT_0068bbf8;
  if (DAT_0068bbf8 != DAT_0068bbfc) {
    do {
      iVar5 = local_4 - iVar8 >> 2;
      local_8 = 0;
      iVar1 = *(int *)(iVar8 + iVar5 * 4);
      iVar6 = *(int *)(iVar1 + 0x1c);
      iVar4 = *(int *)(iVar1 + 0x20) - iVar6;
      iVar7 = iVar4 >> 0x1f;
      if (iVar4 / 0x24 + iVar7 != iVar7) {
        iVar7 = 0;
        do {
          if (*(int *)(DAT_0068be60[*(int *)(iVar7 + iVar6)] + 0xac) != -1) {
            uVar3 = FUN_00436570(*(undefined4 *)(iVar7 + iVar6),&DAT_0068c120);
            FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                         s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x35c6,
                         s_Node_used_for_parking__twice__0066d1b4,uVar3);
          }
          *(int *)(DAT_0068be60[*(int *)(iVar7 + iVar6)] + 0xac) = iVar5;
          *(uint *)(DAT_0068be60[*(int *)(iVar7 + iVar6)] + 0xc) =
               *(uint *)(DAT_0068be60[*(int *)(iVar7 + iVar6)] + 0xc) | 4;
          *(uint *)(DAT_0068be60[*(int *)(iVar7 + iVar6)] + 0xb4) = local_8;
          local_8 = local_8 + 1;
          *(undefined4 *)(DAT_0068be60[*(int *)(iVar7 + iVar6)] + 0xb0) =
               *(undefined4 *)(*(int *)(DAT_0068bbf8 + iVar5 * 4) + 0x18);
          iVar6 = *(int *)(iVar1 + 0x1c);
          iVar8 = DAT_0068bbf8;
          iVar7 = iVar7 + 0x24;
        } while (local_8 < (uint)((*(int *)(iVar1 + 0x20) - iVar6) / 0x24));
      }
      local_4 = local_4 + 4;
    } while (local_4 != DAT_0068bbfc);
  }
  return;
}

