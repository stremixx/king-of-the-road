
/* Library Function - Single Match
    protected: long __thiscall CWnd::OnDisplayChange(unsigned int,long)
   
   Library: Visual Studio 2003 Release */

long __thiscall CWnd::OnDisplayChange(CWnd *this,uint param_1,long param_2)

{
  CWnd *pCVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  pCVar1 = (CWnd *)FUN_0061bb81();
  if (pCVar1 == this) {
    FUN_00635e78();
  }
  uVar2 = FUN_00632d9a();
  if ((uVar2 & 0x40000000) == 0) {
    iVar3 = FUN_00633383();
    FUN_00634a9e(*(undefined4 *)(this + 0x1c),*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),
                 *(undefined4 *)(iVar3 + 0xc),1,1);
  }
  lVar4 = FUN_006333b8();
  return lVar4;
}

