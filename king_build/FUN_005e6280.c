
undefined4 __thiscall FUN_005e6280(undefined4 *param_1,LPSTR param_2)

{
  HMMIO pHVar1;
  
  pHVar1 = mmioOpenA(param_2,(LPMMIOINFO)0x0,0);
  *param_1 = pHVar1;
  return 1;
}

