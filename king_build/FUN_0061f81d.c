
void FUN_0061f81d(DWORD param_1)

{
  int iVar1;
  
  if (PTR_FUN_00685260 != (undefined *)0x0) {
    (*(code *)PTR_FUN_00685260)();
  }
  iVar1 = FUN_00622273();
  if (iVar1 == 0) {
    __amsg_exit(0x10);
  }
  FUN_006222da(iVar1);
                    /* WARNING: Subroutine does not return */
  ExitThread(param_1);
}

