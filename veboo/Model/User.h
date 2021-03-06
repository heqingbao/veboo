//
//  User.h
//  veboo
//
//  Created by HeQingbao on 13-11-30.
//  Copyright (c) 2013年 Study. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseModel.h"

/*
 id	int64	用户UID
 idstr	string	字符串型的用户UID
 screen_name	string	用户昵称
 name	string	友好显示名称
 province	int	用户所在省级ID
 city	int	用户所在城市ID
 location	string	用户所在地
 description	string	用户个人描述
 url	string	用户博客地址
 profile_image_url	string	用户头像地址（中图），50×50像素
 profile_url	string	用户的微博统一URL地址
 domain	string	用户的个性化域名
 weihao	string	用户的微号
 gender	string	性别，m：男、f：女、n：未知
 followers_count	int	粉丝数
 friends_count	int	关注数
 statuses_count	int	微博数
 favourites_count	int	收藏数
 created_at	string	用户创建（注册）时间
 following	boolean	暂未支持
 allow_all_act_msg	boolean	是否允许所有人给我发私信，true：是，false：否
 geo_enabled	boolean	是否允许标识用户的地理位置，true：是，false：否
 verified	boolean	是否是微博认证用户，即加V用户，true：是，false：否
 verified_type	int	暂未支持
 remark	string	用户备注信息，只有在查询用户关系时才返回此字段
 status	object	用户的最近一条微博信息字段 详细
 allow_all_comment	boolean	是否允许所有人对我的微博进行评论，true：是，false：否
 avatar_large	string	用户头像地址（大图），180×180像素
 avatar_hd	string	用户头像地址（高清），高清头像原图
 verified_reason	string	认证原因
 follow_me	boolean	该用户是否关注当前登录用户，true：是，false：否
 online_status	int	用户的在线状态，0：不在线、1：在线
 bi_followers_count	int	用户的互粉数
 lang	string	用户当前的语言版本，zh-cn：简体中文，zh-tw：繁体中文，en：英语
 */

@class Status;
@interface User : BaseModel

@property (nonatomic, assign) NSNumber *userID;
@property (nonatomic, copy) NSString *userIDStr;
@property (nonatomic, copy) NSString *screenName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) NSNumber *province;
@property (nonatomic, assign) NSNumber *city;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *description;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *profileImageUrl;
@property (nonatomic, copy) NSString *profileUrl;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic, copy) NSString *weihao;
@property (nonatomic, copy) NSString *gender;
@property (nonatomic, assign) NSNumber *followersCount;
@property (nonatomic, assign) NSNumber *friendsCount;
@property (nonatomic, assign) NSNumber *statusesCount;
@property (nonatomic, assign) NSNumber *favouritesCount;
@property (nonatomic, copy) NSString *createdAt;
@property (nonatomic, assign) BOOL allowAllActMsg;
@property (nonatomic, assign) BOOL geoEnabled;
@property (nonatomic, assign) BOOL verified;
@property (nonatomic, copy) NSString *remark;
@property (nonatomic, retain) Status *status;
@property (nonatomic, assign) BOOL allowAllComment;
@property (nonatomic, copy) NSString *avatarLarge;
@property (nonatomic, copy) NSString *avatarHD;
@property (nonatomic, copy) NSString *verifiedReason;
@property (nonatomic, assign) NSNumber *onlineStatus;
@property (nonatomic, assign) NSNumber *biFollowersCount;
@property (nonatomic, copy) NSString *lang;
@end
