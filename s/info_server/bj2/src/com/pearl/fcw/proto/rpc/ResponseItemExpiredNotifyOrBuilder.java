// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc.proto

package com.pearl.fcw.proto.rpc;

public interface ResponseItemExpiredNotifyOrBuilder extends
    // @@protoc_insertion_point(interface_extends:fcw.proto.server.ResponseItemExpiredNotify)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <code>repeated .fcw.proto.model.ProtoExpireItem list = 1;</code>
   */
  java.util.List<com.pearl.fcw.proto.model.ProtoExpireItem> 
      getListList();
  /**
   * <code>repeated .fcw.proto.model.ProtoExpireItem list = 1;</code>
   */
  com.pearl.fcw.proto.model.ProtoExpireItem getList(int index);
  /**
   * <code>repeated .fcw.proto.model.ProtoExpireItem list = 1;</code>
   */
  int getListCount();
  /**
   * <code>repeated .fcw.proto.model.ProtoExpireItem list = 1;</code>
   */
  java.util.List<? extends com.pearl.fcw.proto.model.ProtoExpireItemOrBuilder> 
      getListOrBuilderList();
  /**
   * <code>repeated .fcw.proto.model.ProtoExpireItem list = 1;</code>
   */
  com.pearl.fcw.proto.model.ProtoExpireItemOrBuilder getListOrBuilder(
      int index);

  /**
   * <code>repeated .fcw.proto.model.ProtoUndurableItem list1 = 2;</code>
   */
  java.util.List<com.pearl.fcw.proto.model.ProtoUndurableItem> 
      getList1List();
  /**
   * <code>repeated .fcw.proto.model.ProtoUndurableItem list1 = 2;</code>
   */
  com.pearl.fcw.proto.model.ProtoUndurableItem getList1(int index);
  /**
   * <code>repeated .fcw.proto.model.ProtoUndurableItem list1 = 2;</code>
   */
  int getList1Count();
  /**
   * <code>repeated .fcw.proto.model.ProtoUndurableItem list1 = 2;</code>
   */
  java.util.List<? extends com.pearl.fcw.proto.model.ProtoUndurableItemOrBuilder> 
      getList1OrBuilderList();
  /**
   * <code>repeated .fcw.proto.model.ProtoUndurableItem list1 = 2;</code>
   */
  com.pearl.fcw.proto.model.ProtoUndurableItemOrBuilder getList1OrBuilder(
      int index);
}
