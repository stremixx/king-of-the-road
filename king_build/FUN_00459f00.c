
void __fastcall FUN_00459f00(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  LONG LVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063ef7f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064a5a0;
  puVar5 = (undefined4 *)param_1[8];
  local_4 = 1;
  LVar3 = InterlockedDecrement(puVar5 + 1);
  if (LVar3 != 0) goto switchD_00459f4f_default;
  switch((char)puVar5[2]) {
  case '\0':
    if (puVar5[5] != puVar5[4]) {
      FUN_0045aa00();
    }
    FUN_0045a9e0(puVar5[5],*puVar5);
    FUN_0044b440(puVar5,0x18);
    goto switchD_00459f4f_default;
  case '\x01':
    FUN_0045aa00();
    FUN_0044b580();
    FUN_0044b580();
    uVar6 = 0x1c;
    break;
  case '\x02':
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = puVar5 + -1;
    }
    FUN_00459f00();
    uVar6 = 0x28;
    break;
  case '\x03':
    FUN_00459e60();
    uVar6 = 0x1c;
    break;
  default:
    goto switchD_00459f4f_default;
  }
  FUN_0044b440(puVar5,uVar6);
switchD_00459f4f_default:
  *param_1 = &PTR_LAB_0064a598;
  local_4 = 0xffffffff;
  if (param_1 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = param_1 + 1;
  }
  piVar1 = (int *)piVar4[4];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar4;
    if (iVar2 != -1) {
      if (iVar2 + 1U < 0x81) {
        FUN_00401aa0();
        *piVar1 = *(int *)(&DAT_0068c120 + (iVar2 + 8U >> 3) * 4);
        *(int **)(&DAT_0068c120 + (iVar2 + 8U >> 3) * 4) = piVar1;
        DAT_0068c164 = 0;
      }
      else {
        FUN_0061c888(piVar1);
      }
    }
  }
  if (((char)piVar4[6] != '\0') && ((undefined4 *)piVar4[5] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)piVar4[5])(1);
  }
  ExceptionList = local_c;
  return;
}

