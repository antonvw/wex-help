////////////////////////////////////////////////////////////////////////////////
// Name:      intro.h
// Purpose:   Interface file containing Doxyfile reference for mainpage
// Author:    Anton van Wezenbeek
// Copyright: (c) 2017-2025 Anton van Wezenbeek
////////////////////////////////////////////////////////////////////////////////

/*!
\mainpage wex Main Page

This is a <a href="https://antonvw@github.com/antonvw/wex.git">
public source code library</a> containing a collection of 
classes to support vi and ex functionality
in wxStyledTextCtrl derived classes.

<p>
For build instructions see 
<a href="https://github.com/antonvw/wex/blob/v26.04.0/README.md">README</a>.
</p>

\dot
digraph libs {
  boost     [URL="https://www.boost.org"]
  catch2    [URL="https://github.com/catchorg/Catch2"]
  ctags_uni [label="ctags-universal", URL="https://github.com/universal-ctags/ctags"]
  mdap      [label="MaterialDesignArtProvider", URL="https://github.com/perazz/wxMaterialDesignArtProvider"]
  pugixml   [URL="https://github.com/zeux/pugixml"]
  rfw       [URL="https://robotframework.org"]
  wxWidgets [URL="http://docs.wxwidgets.org/latest"]

  del     [label="libwex-del", shape=box, fontsize=8, tooltip="this library contains integration classes, also performs final integraton of factory classes, and invokes static initialization and exit methods"];
  vcs     [label="libwex-vcs", shape=box, fontsize=8, tooltip="this library contains vcs and debug classes"];
  stc     [label="libwex-stc", shape=box, fontsize=8, tooltip="this library contains stc classes and functions"];
  vi      [label="libwex-vi", shape=box, fontsize=8, tooltip="this library contains vi classes and functions"];
  ex      [label="libwex-ex", shape=box, fontsize=8, tooltip="this library contains ex classes and functions"];
  ctags   [label="libwex-ctags", shape=box, fontsize=8, tooltip="this library contains ctags classes and functions"];
  ui      [label="libwex-ui", shape=box, fontsize=8, tooltip="this library contains ui classes (frame, grid, list, menu, notebook, statusbar), and functions"];
  common  [label="libwex-common", shape=box, fontsize=8, tooltip="this library contains common classes"];
  data    [label="libwex-data", shape=box, fontsize=8, tooltip="this library contains data injection classes"];
  syntax  [label="libwex-syntax", shape=box, fontsize=8, tooltip="this library contains syntax lexer classes"];
  factory [label="libwex-factory", shape=box, fontsize=8, tooltip="this library contains factory classes, with virtual methods for derived classes"];
  test    [label="libwex-test", shape=box, fontsize=8, tooltip="this library contains test classes and functions"];
  core    [label="libwex-core", shape=box, fontsize=8, tooltip="this library contains core classes and functions, and does not use any other wex libraries"];
  
  test_app     [label="wex-test-app",     fontsize=8, shape=diamond, color=grey];
  sample       [label="wex-sample",       fontsize=8, shape=diamond, color=grey];
  test_del     [label="wex-test-del",     fontsize=8, shape=diamond, color=grey];
  test_vcs     [label="wex-test-vcs",     fontsize=8, shape=diamond, color=grey];
  test_stc     [label="wex-test-stc",     fontsize=8, shape=diamond, color=grey];
  test_vi      [label="wex-test-vi",      fontsize=8, shape=diamond, color=grey];
  test_ex      [label="wex-test-ex",      fontsize=8, shape=diamond, color=grey];
  test_ctags   [label="wex-test-ctags",   fontsize=8, shape=diamond, color=grey];
  test_ui      [label="wex-test-ui",      fontsize=8, shape=diamond, color=grey];
  test_common  [label="wex-test-common",  fontsize=8, shape=diamond, color=grey];
  test_data    [label="wex-test-data",    fontsize=8, shape=diamond, color=grey];
  test_syntax  [label="wex-test-syntax",  fontsize=8, shape=diamond, color=grey];
  test_factory [label="wex-test-factory", fontsize=8, shape=diamond, color=grey];
  test_core    [label="wex-test-core",    fontsize=8, shape=diamond, color=grey];
  
  {rank=same; del test_del}
  {rank=same; vcs test_vcs}
  {rank=same; stc test_stc}
  {rank=same; vi test_vi}
  {rank=same; ex test_ex}
  {rank=same; ctags test_ctags}
  {rank=same; ui test_ui}
  {rank=same; common test_common}
  {rank=same; data test_data}
  {rank=same; syntax test_syntax}
  {rank=same; factory test_factory}
  {rank=same; core test_core}
   
  del     -> vcs [weight=5];
  vcs     -> stc [weight=5];
  stc     -> vi [weight=5];
  vi      -> ex [weight=5];
  ex      -> ctags [weight=5];
  ctags   -> {ui, ctags_uni} [weight=5];
  ui      -> {common, mdap} [weight=5];
  common  -> data [weight=5];
  data    -> syntax [weight=5];
  syntax  -> factory [weight=5];
  factory -> core [weight=5];
  test    -> {core, catch2} [weight=5];
  core    -> {wxWidgets, boost, pugixml};
  
  test_app     -> {sample, rfw} [style=dashed, color=grey];
  sample       -> del [style=dashed, color=grey];
  test_del     -> {del, test} [style=dashed, color=grey];
  test_vcs     -> {vcs, test} [style=dashed, color=grey];
  test_stc     -> {stc, test} [style=dashed, color=grey];
  test_vi      -> {vi, test} [style=dashed, color=grey];
  test_ex      -> {ex, test} [style=dashed, color=grey];
  test_ctags   -> {ctags, test} [style=dashed, color=grey];
  test_ui      -> {ui, test} [style=dashed, color=grey];
  test_common  -> {common, test} [style=dashed, color=grey];
  test_data    -> {data, test} [style=dashed, color=grey];
  test_syntax  -> {syntax, test} [style=dashed, color=grey];
  test_factory -> {factory, test} [style=dashed, color=grey];
  test_core    -> {core, test} [style=dashed, color=grey];
 }
\enddot
*/
