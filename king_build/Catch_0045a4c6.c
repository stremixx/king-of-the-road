
void Catch_0045a4c6(void)

{
  LONG LVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  if ((puVar2 == (undefined4 *)0x0) || (LVar1 = InterlockedDecrement(puVar2 + 1), LVar1 != 0))
  goto switchD_0045a4ed_default;
  switch((char)puVar2[2]) {
  case '\0':
    if (puVar2[5] != puVar2[4]) {
      FUN_0045aa00();
    }
    FUN_0045a9e0(puVar2[5],*puVar2);
    FUN_0044b440(puVar2,0x18);
    goto switchD_0045a4ed_default;
  case '\x01':
    FUN_0045aa00();
    FUN_0044b580();
    FUN_0044b580();
    uVar3 = 0x1c;
    break;
  case '\x02':
    puVar2 = puVar2 + -1;
    FUN_00459f00();
    uVar3 = 0x28;
    break;
  case '\x03':
    FUN_00459e60();
    uVar3 = 0x1c;
    break;
  default:
    goto switchD_0045a4ed_default;
  }
  FUN_0044b440(puVar2,uVar3);
switchD_0045a4ed_default:
  puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
  if ((puVar2 == (undefined4 *)0x0) || (LVar1 = InterlockedDecrement(puVar2 + 1), LVar1 != 0))
  goto switchD_0045a588_default;
  switch((char)puVar2[2]) {
  case '\0':
    if (puVar2[5] != puVar2[4]) {
      FUN_0045aa00();
    }
    FUN_0045a9e0(puVar2[5],*puVar2);
    FUN_0044b440(puVar2,0x18);
    goto switchD_0045a588_default;
  case '\x01':
    FUN_0045aa00();
    FUN_0044b580();
    FUN_0044b580();
    uVar3 = 0x1c;
    break;
  case '\x02':
    puVar2 = puVar2 + -1;
    FUN_00459f00();
    uVar3 = 0x28;
    break;
  case '\x03':
    FUN_0045aa00();
    if ((*(char *)(puVar2 + 6) != '\0') && ((undefined4 *)puVar2[5] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)puVar2[5])(1);
    }
    uVar3 = 0x1c;
    break;
  default:
    goto switchD_0045a588_default;
  }
  FUN_0044b440(puVar2,uVar3);
switchD_0045a588_default:
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

