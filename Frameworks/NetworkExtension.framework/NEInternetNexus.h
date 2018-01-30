/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEInternetNexus : NENexus {
    NWRemotePacketProxy * _packetProxy;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * _utunProtocol;
}

@property (retain) NWRemotePacketProxy *packetProxy;
@property struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*utunProtocol;
@property (readonly) struct NEVirtualInterface_s { }*virtualInterface;

- (void).cxx_destruct;
- (void)connectNewFlow:(id)arg1;
- (void)dealloc;
- (void)disconnectFlow:(id)arg1;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (id)initWithName:(id)arg1 delegate:(id)arg2 shouldCreateKernelChannel:(bool)arg3;
- (id)packetProxy;
- (bool)setDefaultInputHandler:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg1;
- (void)setPacketProxy:(id)arg1;
- (void)setRemotePacketProxy:(id)arg1;
- (bool)setUseFlowswitch:(bool)arg1;
- (void)setUtunProtocol:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg1;
- (struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)utunProtocol;

@end
