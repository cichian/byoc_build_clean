//------------------------------------------------------------------
//-- File generated by RobustVerilog parser
//-- RobustVerilog version 1.2g (limited free version)
//-- Invoked Tue Jul 21 10:05:11 2020
//-- Source file: axi2apb.v
//-- Parent file: None
//-- Run directory: C:/RobustVerilog_free1.2_win/
//-- Target directory: out/
//-- Command flags: src/base/axi2apb.v -od out -I src/gen -list list.txt -listpath -header -gui 
//-- www.provartec.com/edatools ... info@provartec.com
//------------------------------------------------------------------





      module  axi2apb (clk,reset,AWID,AWADDR,AWLEN,AWSIZE,AWVALID,AWREADY,WID,WDATA,WSTRB,WLAST,WVALID,WREADY,BID,BRESP,BVALID,BREADY,ARID,ARADDR,ARLEN,ARSIZE,ARVALID,ARREADY,RID,RDATA,RRESP,RLAST,RVALID,RREADY,psel,penable,pwrite,paddr,pwdata,prdata,pslverr,pready);

   input              clk;
   input              reset;

   input [15:0]       AWID;
   input [31:0]       AWADDR;
   input [3:0]        AWLEN;
   input [1:0]        AWSIZE;
   input              AWVALID;
   output             AWREADY;
   input [15:0]       WID;
   input [31:0]       WDATA;
   input [3:0]        WSTRB;
   input              WLAST;
   input              WVALID;
   output             WREADY;
   output [15:0]      BID;
   output [1:0]       BRESP;
   output             BVALID;
   input              BREADY;
   input [15:0]       ARID;
   input [31:0]       ARADDR;
   input [3:0]        ARLEN;
   input [1:0]        ARSIZE;
   input              ARVALID;
   output             ARREADY;
   output [15:0]      RID;
   output [31:0]      RDATA;
   output [1:0]       RRESP;
   output             RLAST;
   output             RVALID;
   input              RREADY;
   
   //apb slaves
   output             psel;
   output             penable;
   output             pwrite;
   output [31:0]      paddr;
   output [31:0]      pwdata;
   input [31:0]       prdata;
   input              pslverr;
   input              pready;



   wire                   psel;
   wire                   penable;
   wire                   pwrite;
   wire [31:0]            paddr;
   wire [31:0]            pwdata;
   wire [31:0]            prdata;
   wire                   pslverr;
   wire                   pready;
   
   //outputs of cmd
   wire                   cmd_empty;
   wire                   cmd_read;
   wire [16-1:0]     cmd_id;
   wire [32-1:0]   cmd_addr;
   wire                   cmd_err;
   
   //outputs of rd / wr
   wire                   finish_wr;
   wire                   finish_rd;
   
   
   assign                 paddr  = cmd_addr;
   assign                 pwdata = WDATA;

   
     axi2apb_cmd axi2apb_cmd(
                       .clk(clk),
                       .reset(reset),
                       .AWID(AWID),
                       .AWADDR(AWADDR),
                       .AWLEN(AWLEN),
                       .AWSIZE(AWSIZE),
                       .AWVALID(AWVALID),
                       .AWREADY(AWREADY),
                       .ARID(ARID),
                       .ARADDR(ARADDR),
                       .ARLEN(ARLEN),
                       .ARSIZE(ARSIZE),
                       .ARVALID(ARVALID),
                       .ARREADY(ARREADY),
                       .finish_wr(finish_wr),
                       .finish_rd(finish_rd),
                       .cmd_empty(cmd_empty),
                       .cmd_read(cmd_read),
                       .cmd_id(cmd_id),
                       .cmd_addr(cmd_addr),
                       .cmd_err(cmd_err)
                                           );

   
     axi2apb_rd axi2apb_rd(
                     .clk(clk),
                     .reset(reset),
                     .psel(psel),
                     .penable(penable),
                     .pwrite(pwrite),
                     .paddr(paddr),
                     .pwdata(pwdata),
                     .prdata(prdata),
                     .pslverr(pslverr),
                     .pready(pready),
                     .cmd_err(cmd_err),
                     .cmd_id(cmd_id),
                     .finish_rd(finish_rd),
                     .RID(RID),
                     .RDATA(RDATA),
                     .RRESP(RRESP),
                     .RLAST(RLAST),
                     .RVALID(RVALID),
                     .RREADY(RREADY)
                     );
   
     axi2apb_wr axi2apb_wr(
                     .clk(clk),
                     .reset(reset),
                     .psel(psel),
                     .penable(penable),
                     .pwrite(pwrite),
                     .paddr(paddr),
                     .pwdata(pwdata),
                     .prdata(prdata),
                     .pslverr(pslverr),
                     .pready(pready),
                     .cmd_err(cmd_err),
                     .cmd_id(cmd_id),
                     .finish_wr(finish_wr),
                     .WID(WID),
                     .WDATA(WDATA),
                     .WSTRB(WSTRB),
                     .WLAST(WLAST),
                     .WVALID(WVALID),
                     .WREADY(WREADY),
                     .BID(BID),
                     .BRESP(BRESP),
                     .BVALID(BVALID),
                     .BREADY(BREADY)
                     );
      

   
     axi2apb_ctrl axi2apb_ctrl(
                         .clk(clk),
                         .reset(reset),
                         .finish_wr(finish_wr),            
                         .finish_rd(finish_rd),
                         .cmd_empty(cmd_empty),
                         .cmd_read(cmd_read),
                         .WVALID(WVALID),
                         .psel(psel),
                         .penable(penable),
                         .pwrite(pwrite),
                         .pready(pready)
                         );

   

endmodule




