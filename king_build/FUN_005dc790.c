
undefined4 * __fastcall FUN_005dc790(undefined4 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  HICON dwNewLong;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648890;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00636f84();
  *param_1 = &PTR_LAB_006513d4;
  puVar2 = PTR_DAT_00684f18;
  local_4 = 0;
  if ((*(uint *)(DAT_007206b0 + 0x10c) & 0x400) != 0) {
    FUN_00637795(0,0,0x80000000,&DAT_0072cac8,0,0,0,0);
    uVar7 = 0x40;
    iVar4 = *(int *)(DAT_007206b0 + 0x104);
    iVar5 = *(int *)(DAT_007206b0 + 0x100);
    iVar3 = FUN_005d3630(0x40);
    iVar3 = iVar3 * iVar4;
    iVar4 = FUN_005d3620(iVar3);
    FUN_00632e26(&DAT_0072c9b8,0,0,iVar4 * iVar5,iVar3,uVar7);
    SetCursor((HCURSOR)0x0);
    ExceptionList = local_c;
    return param_1;
  }
  local_4 = 1;
  FUN_00635c2d(0x82);
  FUN_00637795(0,puVar2,0xcf0000,&DAT_0072cac8,0,0,0,0);
  iVar4 = FUN_00639a37();
  dwNewLong = LoadIconA(*(HINSTANCE *)(iVar4 + 0xc),(LPCSTR)0x82);
  SetClassLongA((HWND)param_1[7],-0xe,(LONG)dwNewLong);
  iVar5 = *(int *)(DAT_007206b0 + 0x100);
  iVar4 = FUN_005d3620();
  iVar4 = iVar4 * iVar5;
  iVar3 = *(int *)(DAT_007206b0 + 0x104);
  iVar5 = FUN_005d3630();
  iVar5 = iVar5 * iVar3;
  if ((*(byte *)(DAT_007206b0 + 0x124) & 2) == 0) {
    iVar3 = FUN_005d7bf0(2);
    iVar6 = FUN_005d7bf0(1);
    iVar4 = iVar6 + iVar4 + iVar3;
    iVar3 = FUN_005d7bf0(4);
    iVar6 = FUN_005d7bf0(3);
    iVar5 = iVar6 + iVar5 + iVar3;
  }
  uVar1 = *(uint *)(DAT_007206b0 + 0x124);
  *(uint *)(DAT_007206b0 + 0x124) = uVar1 & 0xfffffffe;
  FUN_00632e26(&DAT_0072c9b8,0,0,iVar4,iVar5,0x80);
  local_4 = local_4 & 0xffffff00;
  *(uint *)(DAT_007206b0 + 0x124) = *(uint *)(DAT_007206b0 + 0x124) | uVar1 & 1;
  FUN_00635a91();
  ExceptionList = local_c;
  return param_1;
}

