
void FUN_005dcb90(void)

{
  CWinThread *pCVar1;
  
  pCVar1 = AfxGetThread();
  if (((pCVar1 != DAT_007206dc) && (pCVar1 != *(CWinThread **)(DAT_007206b0 + 0x18c))) &&
     (*(undefined4 *)(DAT_007206b0 + 0x148) = 0, DAT_007206d4 == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}

