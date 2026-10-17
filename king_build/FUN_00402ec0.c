
void __fastcall FUN_00402ec0(undefined4 *param_1)

{
  int iVar1;
  LONG LVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ae2f;
  local_c = ExceptionList;
  piVar5 = (int *)*param_1;
  if ((piVar5 != (int *)0x0) &&
     (ExceptionList = &local_c, LVar2 = InterlockedDecrement(piVar5 + 1), LVar2 == 0)) {
    switch((char)piVar5[2]) {
    case '\0':
      iVar3 = piVar5[4];
      if ((piVar5[5] != iVar3) && (iVar3 != 0)) {
        iVar1 = *piVar5;
        FUN_004030a0(iVar3,iVar1 + 1 + iVar3);
        FUN_0044b690(iVar3,iVar1 + 1);
      }
      FUN_0045a9e0(piVar5[5],*piVar5);
      FUN_0044b440(piVar5,0x18);
      ExceptionList = local_c;
      return;
    case '\x01':
      iVar3 = piVar5[4];
      if (iVar3 != 0) {
        iVar1 = *piVar5;
        FUN_004030a0(iVar3,iVar1 + 1 + iVar3);
        FUN_0044b690(iVar3,iVar1 + 1);
      }
      FUN_0044b580();
      FUN_0044b580();
      iVar3 = FUN_0044b6d0(0x1c);
      FUN_0044b910();
      *piVar5 = *(int *)(&DAT_0068c124 + iVar3 * 4);
      *(int **)(&DAT_0068c124 + iVar3 * 4) = piVar5;
      break;
    case '\x02':
      piVar4 = piVar5 + -1;
      *piVar4 = (int)&PTR_FUN_0064a5a0;
      local_4 = 1;
      FUN_0044b580();
      *piVar4 = (int)&PTR_LAB_0064a598;
      local_4 = 0xffffffff;
      if (piVar4 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      FUN_0045aa00();
      if (((char)piVar5[6] != '\0') && ((undefined4 *)piVar5[5] != (undefined4 *)0x0)) {
        (*(code *)**(undefined4 **)piVar5[5])(1);
      }
      iVar3 = FUN_0044b6d0(0x28);
      FUN_0044b910();
      *piVar4 = *(int *)(&DAT_0068c124 + iVar3 * 4);
      *(int **)(&DAT_0068c124 + iVar3 * 4) = piVar4;
      break;
    case '\x03':
      iVar3 = piVar5[4];
      if (iVar3 != 0) {
        iVar1 = *piVar5;
        FUN_004030a0(iVar3,iVar1 + 1 + iVar3);
        FUN_0044b690(iVar3,iVar1 + 1);
      }
      if (((char)piVar5[6] != '\0') && ((undefined4 *)piVar5[5] != (undefined4 *)0x0)) {
        (*(code *)**(undefined4 **)piVar5[5])(1);
      }
      FUN_0044b440(piVar5,0x1c);
      ExceptionList = local_c;
      return;
    default:
      goto switchD_00402f09_default;
    }
    FUN_0044ba20();
  }
switchD_00402f09_default:
  ExceptionList = local_c;
  return;
}

