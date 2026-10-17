
void FUN_004222c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_0068be34;
  do {
    iVar1 = 0;
    do {
      if (piVar2[1] <= *piVar2) break;
      iVar1 = iVar1 + 1;
      FUN_00421e80(piVar2 + -1,param_1,param_2);
    } while (iVar1 < 100);
    piVar2 = piVar2 + 4;
    if (0x68be63 < (int)piVar2) {
      return;
    }
  } while( true );
}

