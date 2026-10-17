
/* WARNING: Removing unreachable block (ram,0x0045b9d7) */
/* WARNING: Removing unreachable block (ram,0x0045b9fe) */
/* WARNING: Removing unreachable block (ram,0x0045b94f) */
/* WARNING: Removing unreachable block (ram,0x0045b9e1) */

int * FUN_0045b840(int *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  int local_14;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063f008;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  iVar3 = 0;
  local_14 = 0;
  local_4 = 0;
  if (param_1 != param_2) {
    do {
      iVar1 = *param_1;
      uVar4 = *(uint *)(iVar1 + 0xc);
      if (((uVar4 & 8) == 0) && (iVar2 = *(int *)(DAT_0068be60 + param_3 * 4), iVar2 != iVar1)) {
        if (*(int *)(param_4 + 0x5c) == 2) {
          uVar5 = *(uint *)(iVar2 + 0xc) & 1;
          if ((((uVar5 != 0) && ((uVar4 & 2) != 0)) &&
              (*(int *)(iVar2 + 0xa8) != *(int *)(iVar1 + 0xa8))) ||
             (((uVar5 == 0 && ((uVar4 & 1) != 0)) &&
              (*(int *)(iVar2 + 0xa8) != *(int *)(iVar1 + 0xa8))))) goto LAB_0045b8ec;
        }
        else if ((uVar4 & 0x40) != 0) {
LAB_0045b8ec:
          if (iVar3 == 0) {
            FUN_00464200(0,&param_1);
            iVar3 = local_14;
          }
          else {
            FUN_00460970(iVar3,&param_1);
            local_14 = local_14 + 4;
            iVar3 = local_14;
          }
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  if (iVar3 != 0) {
    uVar4 = (*(int *)(param_5 + 0xdc) + 1U) % 0x37;
    uVar5 = (*(int *)(param_5 + 0xe0) + 1U) % 0x37;
    *(uint *)(param_5 + 0xdc) = uVar4;
    *(uint *)(param_5 + 0xe0) = uVar5;
    *(int *)(param_5 + uVar4 * 4) = *(int *)(param_5 + uVar4 * 4) - *(int *)(param_5 + uVar5 * 4);
    param_2 = *(int **)((*(uint *)(param_5 + *(int *)(param_5 + 0xdc) * 4) % (uint)(iVar3 >> 2)) * 4
                       );
  }
  *unaff_FS_OFFSET = local_c;
  return param_2;
}

