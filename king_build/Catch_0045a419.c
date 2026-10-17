
void Catch_0045a419(void)

{
  LONG LVar1;
  int unaff_EBP;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(unaff_EBP + 8) != 0) &&
     (LVar1 = InterlockedDecrement((LONG *)(*(int *)(unaff_EBP + 8) + 4)), LVar1 == 0)) {
    FUN_0044f150();
  }
  iVar2 = *(int *)(unaff_EBP + 0xc);
  if ((iVar2 != 0) && (LVar1 = InterlockedDecrement((LONG *)(iVar2 + 4)), LVar1 == 0)) {
    switch((char)*(undefined4 *)(iVar2 + 8)) {
    case '\0':
      FUN_00459c80();
      uVar3 = 0x18;
      break;
    case '\x01':
      FUN_00459cc0();
      uVar3 = 0x1c;
      break;
    case '\x02':
      iVar2 = iVar2 + -4;
      FUN_00459f00();
      uVar3 = 0x28;
      break;
    case '\x03':
      FUN_00459e60();
      uVar3 = 0x1c;
      break;
    default:
      goto switchD_0045a458_default;
    }
    FUN_0044b440(iVar2,uVar3);
  }
switchD_0045a458_default:
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

